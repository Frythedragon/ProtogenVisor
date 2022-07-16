//***************************** BLUETOOTH ************************************
/*
BUT : envoyer un chiffre / une lettre avec le bluetooth du téléphone ce qui changeras les LED en consequence



Version 2.0 --- mise à jour le 14/07/2022

Matrices de LED utilisées : Adafruit Small 1.2" 8x8 LED Matrix w/I2C Backpack
                            16x8 1.2" LED Matrix + Backpack
Fonctionnalitées : plusieurs expressions
                   passe en mode sleep()
                   communication bluetooth
                   confirme l'expression en envoyant le chiffre/lettre sur le téléphone

Installer les bibliothèques : Outils -> Gérer les bibliothèques



Branchement des cables :
    - pour les matrices de LED :
        5V / GND / SCL / SDA
    - pour le ventillateur :
        3.3V / GND
    - pour le module bluetooth HC-05 (code 1234 ou 0000)
        IOREF(c'est comme le 5V) / GND / 2pattes(ici 2 et 6)    

Connecter le bluetooth avec le téléphone
Envoyer deux fois le code 
-> première fois pour réveiller la carte
-> deuxième fois pour envoyer le code
-> example: 11

-> ne pas envoyer de code lorsque les programmes qui changent tournent (B et C)

-> si ça bug: reset la carte Arduino avec le bouton qui est dessus



-> Free to use code 
© ◊Frythdragon◊
*/


//***************************** INCLUDE ************************************
#include <Wire.h> // matrices LED
#include <Adafruit_GFX.h> // matrices LED
#include "Adafruit_LEDBackpack.h" // matrices LED

#include <SoftwareSerial.h> // bluetooth
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


//************************* VARIABLES ****************************************
SoftwareSerial bluetooth(2, 6); // (TX, RX)

int count = 0;
char telToOrdi = 'x'; //laisser
// pour communiquer laisser en char et utiliser ''

// pour sleep
int nbTurn = 0;


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
void loop()
/*
  (début ligne  ,    début colonne   ,   truc à faire init avant  ,   nb lignes en + pour la fin  ,   nb colonnes en + pour la fin  ,   LED_ON)
  (     0       ,          0         ,      name in Drawing.h     ,               8               ,                16               ,   LED_ON)
*/
{
  // communication en double => 11
  
  // communication
  if (bluetooth.available()) {  // si il y a une communication du tel vers la carte
    telToOrdi = bluetooth.read();
  }

  // les communications sont en char donc mettre '' dans les tests ==
  if (telToOrdi == '1') {
    bluetooth.println("1"); // confirme quelle est l'expression affichée
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_1, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_1, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_1, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_1, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_1, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_1, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_1, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_1, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '2') {
    bluetooth.println("2");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_2, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_2, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_2, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_2, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_2, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_2, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_2, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_2, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '3') {
    bluetooth.println("3");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_3, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_3, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_3, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_3, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_3, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_3, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_3, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_3, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '4') {
    bluetooth.println("4");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_4, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_4, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_4, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_4, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_4, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_4, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_4, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_4, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '5') {
    bluetooth.println("5");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_5, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_5, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_5, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_5, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_5, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_5, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_5, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_5, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '6') {
    bluetooth.println("6");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_6, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_6, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_6, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_6, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_6, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_6, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_6, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_6, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '7') {
    bluetooth.println("7");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_7, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_7, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_7, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_7, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_7, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_7, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_7, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_7, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '8') {
    bluetooth.println("8");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_8, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_8, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_8, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_8, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_8, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_8, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_8, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_8, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == '9') {
    bluetooth.println("9");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_9, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_9, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_9, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_9, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_9, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_9, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_9, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_9, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == 'A') {
    bluetooth.println("A - BASE");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_A, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_A, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_A, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_A, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_A, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_A, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_A, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_A, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
  }
  else if (telToOrdi == 'B') {
    bluetooth.println("B - FADE EYE");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_B, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_B, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_B_1, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_1, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_B, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_B, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_B, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_B, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_2, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_2, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_3, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_3, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_4, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_4, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_5, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_5, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_6, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_6, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(750);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_right_B_7, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_B_7, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
    delay(1500);
    matrix[ER].clear();
    matrix[EL].clear();
    matrix[ER].drawBitmap(0, 0, eye_B_1, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_B_1, 8, 16, LED_ON);
    matrix[ER].writeDisplay();
    matrix[EL].writeDisplay();
  }
  else if (telToOrdi == 'C') {
    bluetooth.println("C - CRUNCH");
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].clear();
    }
    matrix[NR].drawBitmap(0, 0, nose_right_C, 8, 16, LED_ON);
    matrix[NL].drawBitmap(0, 0, nose_left_C, 8, 16, LED_ON);
    matrix[ER].drawBitmap(0, 0, eye_right_C, 8, 16, LED_ON);
    matrix[EL].drawBitmap(0, 0, eye_left_C, 8, 16, LED_ON);
    matrix[MR1].drawBitmap(0, 0, mouth_right1_C_1, 8, 16, LED_ON);
    matrix[MR2].drawBitmap(0, 0, mouth_right2_C_1, 8, 16, LED_ON);
    matrix[ML1].drawBitmap(0, 0, mouth_left1_C_1, 8, 16, LED_ON);
    matrix[ML2].drawBitmap(0, 0, mouth_left2_C_1, 8, 16, LED_ON);
    for (uint8_t i = 0; i < 8; i++) {
      matrix[i].writeDisplay();
    }
    for (count = 0 ; count < 3 ; count++) {
      delay(500);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].clear();
      }
      matrix[MR1].drawBitmap(0, 0, mouth_right1_C_2, 8, 16, LED_ON);
      matrix[MR2].drawBitmap(0, 0, mouth_right2_C_2, 8, 16, LED_ON);
      matrix[ML1].drawBitmap(0, 0, mouth_left1_C_2, 8, 16, LED_ON);
      matrix[ML2].drawBitmap(0, 0, mouth_left2_C_2, 8, 16, LED_ON);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].writeDisplay();
      }
      delay(500);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].clear();
      }
      matrix[MR1].drawBitmap(0, 0, mouth_right1_C_3, 8, 16, LED_ON);
      matrix[MR2].drawBitmap(0, 0, mouth_right2_C_3, 8, 16, LED_ON);
      matrix[ML1].drawBitmap(0, 0, mouth_left1_C_3, 8, 16, LED_ON);
      matrix[ML2].drawBitmap(0, 0, mouth_left2_C_3, 8, 16, LED_ON);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].writeDisplay();
      }
      delay(500);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].clear();
      }
      matrix[MR1].drawBitmap(0, 0, mouth_right1_C_1, 8, 16, LED_ON);
      matrix[MR2].drawBitmap(0, 0, mouth_right2_C_1, 8, 16, LED_ON);
      matrix[ML1].drawBitmap(0, 0, mouth_left1_C_1, 8, 16, LED_ON);
      matrix[ML2].drawBitmap(0, 0, mouth_left2_C_1, 8, 16, LED_ON);
      for (uint8_t i = 4; i < 8; i++) {
        matrix[i].writeDisplay();
      }
    }
  }

  
  bluetooth.println("turn");
  // ça fait 2 tours avant d'allumer mais je ne sais pas pourquoi (faut pas chercher)
  // du coup sleep() si 2 tours
  // fausse communication et communication quand ça tourne => peut décaler => reset avec le bouton sur la carte
  nbTurn++;
  if (nbTurn > 1){
      sleepPwrDown();
      nbTurn = 0;
  }

  
}



// premiere communication pour réveiler => mettre qqch + le chiffre voulu
void wakeCallback() {}
void sleepPwrDown() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  attachInterrupt(2, wakeCallback, CHANGE); //2 = pate pour reveille (pate TX)
  sleep_mode();
  sleep_disable();
}
