//***************************** BLUETOOTH ************************************
/*
  Version 2.0 --- mise à jour le 14/07/2022

  Matrices de LED utilisées : Adafruit Small 1.2" 8x8 LED Matrix w/I2C Backpack
                            16x8 1.2" LED Matrix + Backpack
  Fonctionnalitées : une seule expression
                   passe en mode sleep()

  Installer les bibliothèques : Outils -> Gérer les bibliothèques



  Branchement des cables :
    - pour les matrices de LED :
        5V / GND / SCL / SDA
    - pour le ventillateur :
        3.3V / GND



  -> Free to use code
  © ◊Frythdragon◊
*/


//***************************** INCLUDE ************************************
#include <Wire.h> // matrices LED
#include <Adafruit_GFX.h> // matrices LED
#include "Adafruit_LEDBackpack.h" // matrices LED

#include "Drawing.h"  // fichier des matrices


//***************************** DECLARATIONS NOMS ET NUMEROS DES MATRICES ************************************
// nom des matrices
// chiffre pour faire des boucles facilemmnent
#define NR      0     // NR = 0
#define NL      1
#define ER      2
#define EL      3
#define MR1     4
#define MR2     5
#define ML1     6
#define ML2     7

// déclaration type matrice
//Adafruit_8x8matrix matrix[NR] = Adafruit_8x8matrix();
//Adafruit_8x8matrix matrix[NL] = Adafruit_8x8matrix();
//Adafruit_8x16matrix matrix[ER] = Adafruit_8x16matrix();
//Adafruit_8x16matrix matrix[EL] = Adafruit_8x16matrix();
//Adafruit_8x16matrix matrix[MR1] = Adafruit_8x16matrix();
//Adafruit_8x16matrix matrix[MR2] = Adafruit_8x16matrix();
//Adafruit_8x16matrix matrix[ML1] = Adafruit_8x16matrix();
//Adafruit_8x16matrix matrix[ML2] = Adafruit_8x16matrix();

//autre déclaration
Adafruit_8x16matrix matrix[8];  //[nb matrices]


//************************* VARIABLES ****************************************
// blink
const unsigned long blinkInterval = 4500;
const unsigned long blinkSpeedInterval = 25;
int eachStep;


//************************* DESSINS ****************************************
// dans le fichier Drawing
// inclue précédamment avec #include "Drawing.h"


//************************* SETUP DE BASE ****************************************
void setup()
{
  // initialistion
  for (uint8_t i = 0; i < 8; i++) // nb matrices = 8
  {
    matrix[i].begin(0x70 + i);  // matrix[0] à le code 0x70 jusqu'à matrice[7] qui à 0x77
    matrix[i].clear();
  }
  // dessin de base
  matrix[NR].drawBitmap(0, 0, nose_right_A, 8, 16, LED_ON);
  matrix[NL].drawBitmap(0, 0, nose_left_A, 8, 16, LED_ON);
  matrix[ER].drawBitmap(0, 0, eye_right_A, 8, 16, LED_ON);
  matrix[EL].drawBitmap(0, 0, eye_left_A, 8, 16, LED_ON);
  matrix[MR1].drawBitmap(0, 0, mouth_right1_A, 8, 16, LED_ON);
  matrix[MR2].drawBitmap(0, 0, mouth_right2_A, 8, 16, LED_ON);
  matrix[ML1].drawBitmap(0, 0, mouth_left1_A, 8, 16, LED_ON);
  matrix[ML2].drawBitmap(0, 0, mouth_left2_A, 8, 16, LED_ON);
  for (uint8_t i = 0; i < 8; i++)
  {
    matrix[i].writeDisplay(); //allume les matrices suivant les indications d'avant
  }

}


//************************* EN BOUCLE ****************************************
void loop() {
  
  delay(blinkInterval);
  Blink();

}



// !! utilisation de delay au lieu de millis => toute la carte attend
// => ne pas utiliser avec le code bluetooth => ça ne marche pas à cause des communications

// => ne pas mettre en mode sleep() => si non ça arrête de blink

// difference delay et milli
// => delay bloque la suite du code
// => renvoie une valeur qui représente le nombre de millisecondes écoulées depuis la mise en tension de l’Arduino -> max 49jours
// Dans le cas où vous voudriez avoir des cycles ON et OFF => if ((millis() - previousTime) > blinkInterval)


// (début ligne, début colonne  , truc à faire init avant, nb lignes total, nb colonnes total, LED_ON)
// (     0     ,       0        ,    nom dans Drawing.h  ,        8       ,        16        , LED_ON)
void Blink() {
  eachStep = 0;
  while (eachStep < 13) {
    delay(blinkSpeedInterval);
    if (eachStep < 7) { // eachStep de 0 et 6  
      eachStep++;
      matrix[ER].clear();
      matrix[EL].clear();
      matrix[ER].drawBitmap((-eachStep+1), 0, eye_right_A, 8, 16, LED_ON);
      matrix[EL].drawBitmap((eachStep-1), 0, eye_left_A, 8, 16, LED_ON);
      matrix[ER].writeDisplay();
      matrix[EL].writeDisplay();
    }
    else if (eachStep < 13) { // eachStep de 7 et 12
      eachStep++;
      matrix[ER].clear();
      matrix[EL].clear();
      matrix[ER].drawBitmap((-13+eachStep), 0, eye_right_A, 8, 16, LED_ON);
      matrix[EL].drawBitmap((13-eachStep), 0, eye_left_A, 8, 16, LED_ON);
      matrix[ER].writeDisplay();
      matrix[EL].writeDisplay();
    }
  }
}
