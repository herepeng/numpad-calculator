#ifndef KB_H
#define KB_H

#include "quantum.h"

// readability
#define ___ KC_NO

/* numpad21 numpad matrix layout
   * ,-------------------.
   * | ca | __ | __ | Vo |
   * |----|----|----|----|
   * | ve |  / |  * |  - |
   * |----|----|----|----|
   * |  7 |  8 |  9 |    |
   * |----|----|----|  + |
   * |  4 |  5 |  6 |    |
   * |----|----|----|----|
   * |  1 |  2 |  3 |    |
   * |----|----|----| en |
   * |     0   |  . |    |
   * `-------------------'
 */
 
#define KEYMAP( \
	K00,           K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23, \
	K30, K31, K32,      \
	K40, K41, K42, K43, \
	K50,      K52   \
) { \
	{ K00,   ___,   ___,   K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   K23 }, \
	{ K30,   K31,   K32,   ___ }, \
	{ K40,   K41,   K42,   K43 }, \
	{ K50,   ___,   K52,   ___ }  \
}

#endif