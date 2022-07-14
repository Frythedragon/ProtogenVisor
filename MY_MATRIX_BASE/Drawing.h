//************************* DESSINS ****************************************
static const uint8_t PROGMEM
// PROGMEM pour moins de place
// ; pour le dernier dessin et , pour les autres


/***************************************************/
// les nose : 
// !!! ligne 8 = ligne 1 sur la carte
// !!! ligne 1 = ligne 2 sur la carte
// c'est décalé de 1

// mouth_left_1
// les 2 led de devant sont collées ensembles
// B10000000, ligne 1
// B10000000, ligne 2


/***************************************************/
//base
nose_left_A[]=
{
B00000000,
B10000000,
B11000000,
B11000000,
B11000000,
B11110000,
B11111000,
B00000000,
},
nose_right_A[]=
{
B00000000,
B00000001,
B00000011,
B00000011,
B00000011,
B00001111,
B00011111,
B00000000,
},
mouth_left1_A[]=
{
B11100000,
B11100000,
B01110000,
B00111000,
B00011100,
B00001110,
B00001110,
B00000111,
B00000111,
B00001110,
B00001110,
B00011100,
B00111000,
B01110000,
B11100000,
B11000000,
},
mouth_left2_A[]=
{
B11110000,
B10110000,
B10010000,
B11010000,
B01110000,
B01110000,
B00111000,
B00011100,
B00011100,
B00001100,
B00000110,
B00000110,
B00000110,
B00000011,
B00000011,
B00000011,
},
mouth_right1_A[]=
{
B00000111,
B00000111,
B00001110,
B00011100,
B00111000,
B01110000,
B01110000,
B11100000,
B11100000,
B01110000,
B01110000,
B00111000,
B00011100,
B00001110,
B00000111,
B00000011,
},
mouth_right2_A[]=
{
B00001111,
B00001101,
B00001001,
B00001011,
B00001110,
B00001110,
B00011100,
B00111000,
B00111000,
B00110000,
B01100000,
B01100000,
B01100000,
B11000000,
B11000000,
B11000000,
},
eye_left_A[]=
{
B11000000,
B11100000,
B11100000,
B11111000,
B11111100,
B11111110,
B11111110,
B11111111,
B11111111,
B11111111,
B11111111,
B11111110,
B11111110,
B11111100,
B11111000,
B11100000,
},
eye_right_A[]=
{
B00000011,
B00000111,
B00000111,
B00011111,
B00111111,
B01111111,
B01111111,
B11111111,
B11111111,
B11111111,
B11111111,
B01111111,
B01111111,
B00111111,
B00011111,
B00000111,
},

/***************************************************/
//; pour le dernier / , pour les autres
pattern[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
};