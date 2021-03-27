#pragma once

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER harry
#define PRODUCT 50_malakeys
#define DESCRIPTION Teclado de papelao, epoxi e uns resto de coisa

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* A3, A2, A1, A0, 15 */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
/* RX, 2, 3, 4, 5, 6, 7, 8, 9, 14, 16, 10 */
#define MATRIX_COL_PINS { D2, D1, D0, D4, C6, D7, E6, B4, B5, B3, B2, B6 }
