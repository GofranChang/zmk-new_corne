// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY

#define MIRYOKU_NAV_VI

/* Base 层中间三个键 */
#define EYELASH_E00_BASE &mmv MOVE_UP
#define EYELASH_E01_BASE &mmv MOVE_LEFT
// #define EYELASH_E02_BASE 
#define EYELASH_E03_BASE &mmv MOVE_RIGHT
// #define EYELASH_E04_BASE &mmv
#define EYELASH_E05_BASE &mmv MOVE_DOWN

/* Base 层中间三个键 */
#define EYELASH_E00_MOUSE &mmv MOVE_UP
#define EYELASH_E01_MOUSE &mmv MOVE_LEFT
#define EYELASH_E03_MOUSE &mmv MOVE_RIGHT
#define EYELASH_E05_MOUSE &mmv MOVE_DOWN

/* Nav 层中间三个键 */
#define EYELASH_E00_NAV &kp PG_UP
#define EYELASH_E01_NAV &kp HOME
// #define EYELASH_E02_NAV &kp PG_UP
#define EYELASH_E03_NAV &kp END
// #define EYELASH_E04_NAV &kp PG_UP
#define EYELASH_E05_NAV &kp PG_DN

/* Num 层中间三个键 */
#define EYELASH_E04_NUM &kp N1
#define EYELASH_E05_NUM &kp N2
#define EYELASH_E06_NUM &kp N3