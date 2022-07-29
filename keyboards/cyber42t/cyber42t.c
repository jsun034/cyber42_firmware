// #define _SVID_SOURCE
#include "cyber42t.h"
// #include "analog.h"
// #include "print.h"
// #include <stdio.h>

// /* Battery pins */
// #define VBATPIN B5
// #define LOWBATPIN D7 // #9

// void keyboard_post_init_kb(void) {
//   setPinInput(VBATPIN);
//   setPinOutput(LOWBATPIN);
// }

// void matrix_scan_kb(void) {
//   float measuredvbat = analogReadPin(VBATPIN);
//   measuredvbat *= 2;    // we divided by 2, so multiply back
//   measuredvbat *= 3.3;  // Multiply by 3.3V, our reference voltage
//   measuredvbat /= 1024; // convert to voltage

//   if (measuredvbat < 3.4) {
//      writePinHigh(LOWBATPIN);
//   } else {
//     writePinLow(LOWBATPIN);
//   }
// }

