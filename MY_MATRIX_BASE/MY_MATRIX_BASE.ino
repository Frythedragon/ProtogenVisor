//***************************** BLUETOOTH ************************************
/*
Version 1.0 --- mise à jour le 14/07/2022

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
#include <avr/sleep.h>  // mode sleep()


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

  // communication Bluetooth
  // Ouvre la voie série avec le module Bluetooth
  bluetooth.begin(9600);
  bluetooth.println("START");

  sleepPwrDown();
}//



//************************* EN BOUCLE ****************************************
void loop(){} // rien 


// mode sleep pour économiser la batterie
void wakeCallback() {}
void sleepPwrDown() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  attachInterrupt(2, wakeCallback, CHANGE); //2 = pate pour reveille (non utilisée)
  sleep_mode();
  sleep_disable();
}
