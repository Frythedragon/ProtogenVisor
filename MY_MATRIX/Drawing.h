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

// dent arrière
nose_right_1[]=
{
B00000011,
B00100011,
B00110011,
B00011011,
B00001111,
B00000111,
B00000011,
B00000001,
},
nose_left_1[]=
{
B11000000,
B11000100,
B11001100,
B11011000,
B11110000,
B11100000,
B11000000,
B10000000,
},

mouth_left1_1[]=
{
B01110000,
B01110000,
B11100000,
B11000000,
B11000000,
B11100000,
B01110000,
B00111000,
B00011000,
B00001100,
B00001100,
B00011000,
B00011000,
B00110000,
B00110000,
B01100000,
},
mouth_left2_1[]=
{
B11100000,
B11111000,
B01101100,
B01101100,
B01111000,
B00110000,
B00110000,
B00110000,
B00011000,
B00011000,
B00011000,
B00001100,
B00001100,
B00001100,
B00000110,
B00000110,
},
mouth_right1_1[]=
{
B00001110,
B00001110,
B00000111,
B00000011,
B00000011,
B00000111,
B00001110,
B00011100,
B00011000,
B00110000,
B00110000,
B00011000,
B00011000,
B00001100,
B00001100,
B00000110,
},
mouth_right2_1[]=
{
B00000111,
B00011111,
B00110110,
B00110110,
B00011110,
B00001100,
B00001100,
B00001100,
B00011000,
B00011000,
B00011000,
B00110000,
B00110000,
B00110000,
B01100000,
B01100000,
},
eye_left_1[]=
{
B10000000,
B10000000,
B10000000,
B11000000,
B11000000,
B11100000,
B11111000,
B11111100,
B11111110,
B11111110,
B11111110,
B11111110,
B11111100,
B11111000,
B11110000,
B11100000,
},
eye_right_1[]=
{
B00000001,
B00000001,
B00000001,
B00000011,
B00000011,
B00000111,
B00011111,
B00111111,
B01111111,
B01111111,
B01111111,
B01111111,
B00111111,
B00011111,
B00001111,
B00000111,
},

/***********************************/
// eye goute + grande dent avant
nose_right_2[]=
{
B00000001,
B00100001,
B00110001,
B00011001,
B00001101,
B00000111,
B00000011,
B00000001,
},
nose_left_2[]=
{
B10000000,
B10000100,
B10001100,
B10011000,
B10110000,
B11100000,
B11000000,
B10000000,
},
mouth_left1_2[]=
{
B00000001,
B00000011,
B00000110,
B00001100,
B00011000,
B00110000,
B01100000,
B11000000,
B11000000,
B11110000,
B00111100,
B00001111,
B00000011,
B00000110,
B00001100,
B00011000,
},
mouth_left2_2[]=
{
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
B00110000,
B00010000,
B00011000,
B00001000,
B00001000,
B00001000,
B00001100,
B00000100,
B00000100,
B00001100,
},
mouth_right1_2[]=
{
B10000000,
B11000000,
B01100000,
B00110000,
B00011000,
B00001100,
B00000110,
B00000011,
B00000011,
B00001111,
B00111100,
B11110000,
B11000000,
B01100000,
B00110000,
B00011000,
},
mouth_right2_2[]=
{
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
B00001100,
B00001000,
B00011000,
B00010000,
B00010000,
B00010000,
B00110000,
B00100000,
B00100000,
B00110000,
},
eye_left_2[]=
{
B00000001,
B00000110,
B00001110,
B00011100,
B00111000,
B01111000,
B01111000,
B11111000,
B11111000,
B11111000,
B11111100,
B01111110,
B01111110,
B00111110,
B00011100,
B00000000,
},
eye_right_2[]=
{
B10000000,
B01100000,
B01110000,
B00111000,
B00011100,
B00011110,
B00011110,
B00011111,
B00011111,
B00011111,
B00111111,
B01111110,
B01111110,
B01111100,
B00111000,
B00000000,
},

/***********************************/
//^^
nose_left_3[]=
{
B10000000,
B11000000,
B11000000,
B11100000,
B01110000,
B00111100,
B00011111,
B10000000,
},
nose_right_3[]=
{
B00000001,
B00000011,
B00000011,
B00000111,
B00001110,
B00111110,
B11111000,
B00000001,
},
mouth_left1_3[]=
{
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
B00110000,
B00011000,
B00011000,
B00011000,
B00011000,
B00011000,
B00011000,
B00110000,
B00110000,
B00110000,
},
mouth_left2_3[]=
{
B11000000,
B11100000,
B00111100,
B11101100,
B11001110,
B00000110,
B00000111,
B00000011,
B00000011,
B00000011,
B00000011,
B00000110,
B00000110,
B00000110,
B00000110,
B00001100,
},
mouth_right1_3[]=
{
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
B00001100,
B00011000,
B00011000,
B00011000,
B00011000,
B00011000,
B00011000,
B00001100,
B00001100,
B00001100,
},
mouth_right2_3[]=
{
B00000011,
B00000111,
B00111100,
B00110111,
B01110011,
B01100000,
B11100000,
B11000000,
B11000000,
B11000000,
B11000000,
B01100000,
B01100000,
B01100000,
B01100000,
B00110000,
},
eye_left_3[]=
{
B00000001,
B00000011,
B00000111,
B00001111,
B00011110,
B00111100,
B01111000,
B11110000,
B11110000,
B01111000,
B00111100,
B00011110,
B00001111,
B00000111,
B00000011,
B00000001,
},
eye_right_3[]=
{
B10000000,
B11000000,
B11100000,
B11110000,
B01111000,
B00111100,
B00011110,
B00001111,
B00001111,
B00011110,
B00111100,
B01111000,
B11110000,
B11100000,
B11000000,
B10000000,
},

/***********************************/
// ><
nose_left_4[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B10000000,
B11000000,
B01100000,
B00000000,
},
nose_right_4[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000001,
B00000011,
B00000110,
B00000000,
},
mouth_left1_4[]=
{
B10000000,
B10000000,
B11000000,
B01000000,
B01000000,
B11000000,
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
B00110000,
B00010000,
B00010000,
B00110000,
},
mouth_left2_4[]=
{
B11100000,
B10100000,
B00110000,
B10111000,
B11101000,
B00001100,
B00000100,
B00000110,
B00000010,
B00000011,
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
},
mouth_right1_4[]=
{
B00000001,
B00000001,
B00000011,
B00000010,
B00000010,
B00000011,
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
B00001100,
B00001000,
B00001000,
B00001100,
},
mouth_right2_4[]=
{
B00000111,
B00000101,
B00001100,
B00011101,
B00010111,
B00110000,
B00100000,
B01100000,
B01000000,
B11000000,
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
},
eye_left_4[]=
{
B10000001,
B10000001,
B10000001,
B10000001,
B11000001,
B01000011,
B01000010,
B01100010,
B00100010,
B00100110,
B00110100,
B00010100,
B00010100,
B00011100,
B00001000,
B00001000,
},
eye_right_4[]=
{
B10000001,
B10000001,
B10000001,
B10000001,
B10000011,
B11000010,
B01000010,
B01000110,
B01000100,
B01100100,
B00101100,
B00101000,
B00101000,
B00111000,
B00010000,
B00010000,
},

/***********************************/
// turn on
nose_right_5[]=
{
B00000000,
B00000000,
B00000000,
B00000001,
B00000001,
B00000011,
B00000111,
B00000000,
},
nose_left_5[]=
{
B00000000,
B00000000,
B00000000,
B10000000,
B10000000,
B11000000,
B11100000,
B00000000,
},
mouth_right1_5[]=
{
B00000001,
B00000001,
B00000010,
B00000100,
B00000010,
B00000001,
B00000010,
B00000100,
B00001000,
B00000100,
B00000010,
B00000001,
B00000010,
B00000100,
B00001000,
B00010000,
},
mouth_right2_5[]=
{
B00000010,
B00000010,
B00000100,
B00000100,
B00001000,
B00001000,
B00010000,
B00010000,
B00100000,
B00100000,
B01000000,
B01000000,
B10000000,
B01000000,
B00100000,
B00010000,
},
mouth_left1_5[]=
{
B10000000,
B10000000,
B01000000,
B00100000,
B01000000,
B10000000,
B01000000,
B00100000,
B00010000,
B00100000,
B01000000,
B10000000,
B01000000,
B00100000,
B00010000,
B00001000,
},
mouth_left2_5[]=
{
B01000000,
B01000000,
B00100000,
B00100000,
B00010000,
B00010000,
B00001000,
B00001000,
B00000100,
B00000100,
B00000010,
B00000010,
B00000001,
B00000010,
B00000100,
B00001000,
},
eye_left_5[]=
{
B10000000,
B11000000,
B11000000,
B11100000,
B11100000,
B11110000,
B11110000,
B11110000,
B00110000,
B11110000,
B11110000,
B11100000,
B11100000,
B11000000,
B11000000,
B10000000,
},
eye_right_5[]=
{
B00000001,
B00000011,
B00000011,
B00000111,
B00000111,
B00001111,
B00001111,
B00001111,
B00001100,
B00001111,
B00001111,
B00000111,
B00000111,
B00000011,
B00000011,
B00000001,
},

/***********************************/
// sick
nose_left_6[]=
{
B00000000,
B00000000,
B00010000,
B00110000,
B01100000,
B01000000,
B00000000,
B00000000,
},
nose_right_6[]=
{
B00000000,
B00000000,
B00001000,
B00001100,
B00000110,
B00000010,
B00000000,
B00000000,
},
mouth_left1_6[]=
{
B00100000,
B00100000,
B01000000,
B10000000,
B10000000,
B01000000,
B00100000,
B00010000,
B00001000,
B00001000,
B00001000,
B00010000,
B00100000,
B01000000,
B10000000,
B10000000,
},
mouth_left2_6[]=
{
B00000001,
B00000010,
B00000100,
B00001000,
B00010000,
B00100000,
B01000000,
B01000000,
B01000000,
B01000000,
B00100000,
B00010000,
B00001000,
B00000100,
B00000010,
B00000001,
},
mouth_right1_6[]=
{
B00000100,
B00000100,
B00000010,
B00000001,
B00000001,
B00000010,
B00000100,
B00001000,
B00010000,
B00010000,
B00010000,
B00001000,
B00000100,
B00000010,
B00000001,
B00000001,
},
mouth_right2_6[]=
{
B10000000,
B01000000,
B00100000,
B00010000,
B00001000,
B00000100,
B00000010,
B00000010,
B00000010,
B00000010,
B00000100,
B00001000,
B00010000,
B00100000,
B01000000,
B10000000,
},
eye_left_6[]=
{
B00000100,
B00001100,
B00001100,
B00001110,
B00011110,
B00011111,
B00111111,
B00111111,
B00111111,
B01111111,
B01111110,
B11111110,
B11111110,
B11111100,
B11111000,
B11110000,
},
eye_right_6[]=
{
B00100000,
B00110000,
B00110000,
B01110000,
B01111000,
B11111000,
B11111100,
B11111100,
B11111100,
B11111110,
B01111110,
B01111111,
B01111111,
B00111111,
B00011111,
B00001111,
},

/***********************************/
// best dent
nose_right_7[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000001,
B00000001,
B00000111,
B00000000,
},
nose_left_7[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B10000000,
B10000000,
B11100000,
B00000000,
},
mouth_right1_7[]=
{
B00010000,
B00010000,
B00010000,
B00010000,
B00001000,
B00000100,
B00100010,
B01000100,
B10001000,
B01000000,
B00100000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
},
mouth_right2_7[]=
{
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001100,
B00000010,
B00001100,
B00011000,
B00100000,
B00011000,
B00001000,
B00001000,
B00001000,
B00001000,
},
mouth_left1_7[]=
{
B00001000,
B00001000,
B00001000,
B00001000,
B00010000,
B00100000,
B01000100,
B00100010,
B00010001,
B00000010,
B00000100,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
},
mouth_left2_7[]=
{
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00110000,
B01000000,
B00110000,
B00011000,
B00000100,
B00011000,
B00010000,
B00010000,
B00010000,
B00010000,
},
eye_left_7[]=
{
B01100000,
B01110000,
B01011000,
B01001100,
B01000110,
B01100011,
B00100001,
B00100001,
B00100001,
B00100011,
B00110010,
B00010010,
B00010110,
B00010100,
B00011100,
B00011000,
},
eye_right_7[]=
{
B00000110,
B00001110,
B00011010,
B00110010,
B01100010,
B11000110,
B10000100,
B10000100,
B10000100,
B11000100,
B01001100,
B01001000,
B01101000,
B00101000,
B00111000,
B00011000,
},

/***********************************/
// triangle inverse + mouth aggrandir
nose_right_8[]=
{
B00000000,
B00000000,
B00000000,
B00000101,
B00001011,
B00000101,
B00001111,
B00000000,
},
nose_left_8[]=
{
B00000000,
B00000000,
B00000000,
B10100000,
B11010000,
B10100000,
B11110000,
B00000000,
},
mouth_right1_8[]=
{
B00011100,
B00011100,
B00011100,
B00011100,
B00011110,
B00011110,
B00001110,
B00001110,
B00001111,
B00001111,
B00000111,
B00000111,
B00000111,
B00000111,
B00001110,
B00001110,
},
mouth_right2_8[]=
{
B00000001,
B00000010,
B00000100,
B00001000,
B00011000,
B00001100,
B00000110,
B00000011,
B00000111,
B00000111,
B00001110,
B00001110,
B00011100,
B00011100,
B00111000,
B00111000,
},
mouth_left1_8[]=
{
B00111000,
B00111000,
B00111000,
B00111000,
B01111000,
B01111000,
B01110000,
B01110000,
B11110000,
B11110000,
B11100000,
B11100000,
B11100000,
B11100000,
B01110000,
B01110000,
},
mouth_left2_8[]=
{
B10000000,
B01000000,
B00100000,
B00010000,
B00011000,
B00110000,
B01100000,
B11000000,
B11100000,
B11100000,
B01110000,
B01110000,
B00111000,
B00111000,
B00011100,
B00011100,
},
eye_right_8[]=
{
B00000001,
B00000011,
B00000111,
B00001111,
B00011111,
B00111111,
B01111111,
B11111111,
B11111111,
B01111111,
B00111111,
B00011111,
B00001111,
B00000111,
B00000011,
B00000001,
},
eye_left_8[]=
{
B10000000,
B11000000,
B11100000,
B11110000,
B11111000,
B11111100,
B11111110,
B11111111,
B11111111,
B11111110,
B11111100,
B11111000,
B11110000,
B11100000,
B11000000,
B10000000,
},

/***********************************/
// éclair
nose_right_9[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000001,
B00000001,
B00000011,
B00000000,
},
nose_left_9[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B10000000,
B10000000,
B11000000,
B00000000,
},
mouth_left1_9[]=
{
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
B00100000,
B01100000,
B01000000,
B11000000,
B10000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
},
mouth_left2_9[]=
{
B11001100,
B10000110,
B00000011,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
B00001100,
B00001000,
B00011000,
B00010000,
B00010000,
B00011000,
B00001000,
B00001100,
},
mouth_right1_9[]=
{
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
B00000100,
B00000110,
B00000010,
B00000011,
B00000001,
B00000001,
B00000011,
B00000010,
B00000110,
B00000100,
},
mouth_right2_9[]=
{
B00110011,
B01100001,
B11000000,
B10000000,
B11000000,
B01000000,
B01100000,
B00100000,
B00110000,
B00010000,
B00011000,
B00001000,
B00001000,
B00011000,
B00010000,
B00110000,
},
eye_right_9[]=
{
B00000001,
B00000011,
B00000011,
B00000111,
B00001111,
B00001111,
B00011110,
B00111110,
B00111110,
B01111110,
B11111110,
B11111110,
B01111100,
B00111100,
B00011100,
B00001100,
},
eye_left_9[]=
{
B10000000,
B11000000,
B11000000,
B11100000,
B11110000,
B11110000,
B01111000,
B01111100,
B01111100,
B01111110,
B01111111,
B01111111,
B00111110,
B00111100,
B00111000,
B00110000,
},

/***********************************/
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

/**************************************************************/
//disparition avec plusieurs eye
nose_left_B[]=
{
B10000000,
B10000000,
B10000100,
B10001000,
B10010000,
B10100000,
B11000000,
B00000000,
},
nose_right_B[]=
{
B00000001,
B00000001,
B00100001,
B00010001,
B00001001,
B00000101,
B00000011,
B00000000,
},
mouth_left1_B[]=
{
B01000000,
B01000000,
B01000000,
B01000000,
B01000000,
B01000000,
B01100000,
B01100000,
B00100000,
B00100000,
B00100000,
B00100000,
B00110000,
B00110000,
B00010000,
B00010000,
},
mouth_left2_B[]=
{
B00100000,
B00100000,
B00100000,
B00100000,
B00100000,
B00100000,
B00110000,
B00110000,
B00010000,
B00010000,
B00010000,
B00010000,
B00011000,
B00011000,
B00001000,
B00001000,
},
mouth_right1_B[]=
{
B00000010,
B00000010,
B00000010,
B00000010,
B00000010,
B00000010,
B00000110,
B00000110,
B00000100,
B00000100,
B00000100,
B00000100,
B00001100,
B00001100,
B00001000,
B00001000,
},
mouth_right2_B[]=
{
B00000100,
B00000100,
B00000100,
B00000100,
B00000100,
B00000100,
B00001100,
B00001100,
B00001000,
B00001000,
B00001000,
B00001000,
B00011000,
B00011000,
B00010000,
B00010000,
},
eye_B_1[]=
{
B00011000,
B00011000,
B00111100,
B00111100,
B01111110,
B01111110,
B11111111,
B11111111,
B11111111,
B11111111,
B01111110,
B01111110,
B00111100,
B00111100,
B00011000,
B00011000,
},
eye_B_2[]=
{
B00000000,
B00000000,
B00000000,
B00011000,
B00111100,
B01111110,
B11111111,
B11111111,
B11111111,
B11111111,
B01111110,
B00111100,
B00011000,
B00000000,
B00000000,
B00000000,
},
eye_B_3[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00011000,
B00111100,
B01111110,
B11111111,
B11111111,
B01111110,
B00111100,
B00011000,
B00000000,
B00000000,
B00000000,
B00000000,
},
eye_B_4[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00011000,
B00111100,
B01111110,
B01111110,
B00111100,
B00011000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
},
eye_B_5[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00011000,
B00111100,
B00111100,
B00011000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
},
eye_B_6[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00011000,
B00011000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
},
eye_left_B_7[]=
{
B00000000,
B00000000,
B00000000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00000000,
B00000000,
B00000000,
},
eye_right_B_7[]=
{
B00000000,
B00000000,
B00000000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B00000000,
B00000000,
B00000000,
},

/***********************************/
// crunch
nose_right_C[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B00000001,
B00000011,
B00000001,
B00000000,
},
nose_left_C[]=
{
B00000000,
B00000000,
B00000000,
B00000000,
B10000000,
B11000000,
B10000000,
B00000000,
},
eye_right_C[]=
{
B00000000,
B00000011,
B00000111,
B00000111,
B00001110,
B00001110,
B00011110,
B00111110,
B01111100,
B11111100,
B11111100,
B01111100,
B00111000,
B00111000,
B00011000,
B00010000,
},
eye_left_C[]=
{
B00000000,
B11000000,
B11100000,
B11100000,
B01110000,
B01110000,
B01111000,
B01111100,
B00111110,
B00111111,
B00111111,
B00111110,
B00011100,
B00011100,
B00011000,
B00001000,
},

mouth_left1_C_1[]=
{
B00001111,
B00001111,
B10000111,
B11000011,
B11000011,
B10000111,
B00001111,
B00001111,
B10000111,
B11000011,
B11100001,
B11100001,
B11000011,
B10000111,
B00001111,
B00001111,
},
mouth_right2_C_1[]=
{
B11111100,
B11111000,
B11110000,
B11100001,
B11000011,
B10000111,
B00001111,
B00001111,
B10000111,
B11000011,
B11100001,
B11110000,
B11110000,
B11100001,
B11000011,
B10000111,
},
mouth_right1_C_1[]=
{
B11110000,
B11110000,
B11100001,
B11000011,
B11000011,
B11100001,
B11110000,
B11110000,
B11100001,
B11000011,
B10000111,
B10000111,
B11000011,
B11100001,
B11110000,
B11110000,
},
mouth_left2_C_1[]=
{
B00111111,
B00011111,
B00001111,
B10000111,
B11000011,
B11100001,
B11110000,
B11110000,
B11100001,
B11000011,
B10000111,
B00001111,
B00001111,
B10000111,
B11000011,
B11100001,
},
mouth_right1_C_2[]=
{
B11111001,
B11111001,
B11110011,
B11100111,
B11100111,
B11110011,
B11111001,
B11111001,
B11110011,
B11100111,
B11001111,
B11001111,
B11100111,
B11110011,
B11111001,
B11111001,
},
mouth_right2_C_2[]=
{
B11111110,
B11111100,
B11111001,
B11110011,
B11100111,
B11001111,
B10011111,
B10011111,
B11001111,
B11100111,
B11110011,
B11111001,
B11111001,
B11110011,
B11100111,
B11001111,
},
mouth_left1_C_2[]=
{
B10011111,
B10011111,
B11001111,
B11100111,
B11100111,
B11001111,
B10011111,
B10011111,
B11001111,
B11100111,
B11110011,
B11110011,
B11100111,
B11001111,
B10011111,
B10011111,
},
mouth_left2_C_2[]=
{
B01111111,
B00111111,
B10011111,
B11001111,
B11100111,
B11110011,
B11111001,
B11111001,
B11110011,
B11100111,
B11001111,
B10011111,
B10011111,
B11001111,
B11100111,
B11110011,
},
mouth_right1_C_3[]=
{
B11111101,
B11111101,
B11111011,
B11110111,
B11110111,
B11111011,
B11111101,
B11111101,
B11111011,
B11110111,
B11101111,
B11101111,
B11110111,
B11111011,
B11111101,
B11111101,
},
mouth_right2_C_3[]=
{
B11111110,
B11111101,
B11111011,
B11110111,
B11101111,
B11011111,
B10111111,
B10111111,
B11011111,
B11101111,
B11110111,
B11111011,
B11111011,
B11110111,
B11101111,
B11011111,
},
mouth_left1_C_3[]=
{
B10111111,
B10111111,
B11011111,
B11101111,
B11101111,
B11011111,
B10111111,
B10111111,
B11011111,
B11101111,
B11110111,
B11110111,
B11101111,
B11011111,
B10111111,
B10111111,
},
mouth_left2_C_3[]=
{
B01111111,
B10111111,
B11011111,
B11101111,
B11110111,
B11111011,
B11111101,
B11111101,
B11111011,
B11110111,
B11101111,
B11011111,
B11011111,
B11101111,
B11110111,
B11111011,
},


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
