#ifndef KOS_KI_H
#define KOS_KI_H

#include <stdlib.h>
#include <stdint.h>

int KeyboardInit(void);                /* Инициализация ввода             */
void KeyboardQuit(void); 
void KeyboardKeystatesRefresh(void);   /* Обновление состояния клавиатуры */
bool KeyboardKeyPress(uint8_t key);    /* Проверка нажатия клавиши        */
bool KeyboardKeyRelease(uint8_t key);  /* Проверка отпускания клавиши     */
bool KeyboardKeyPressed(uint8_t key);  /* Проверка зажатия клавиши        */

#define KOS_KEYS_COUNT          232

#define KOS_KEY_A               4
#define KOS_KEY_B               5
#define KOS_KEY_C               6
#define KOS_KEY_D               7
#define KOS_KEY_E               8
#define KOS_KEY_F               9
#define KOS_KEY_G               10
#define KOS_KEY_H               11
#define KOS_KEY_I               12
#define KOS_KEY_J               13
#define KOS_KEY_K               14
#define KOS_KEY_L               15
#define KOS_KEY_M               16
#define KOS_KEY_N               17
#define KOS_KEY_O               18
#define KOS_KEY_P               19
#define KOS_KEY_Q               20
#define KOS_KEY_R               21
#define KOS_KEY_S               22
#define KOS_KEY_T               23
#define KOS_KEY_U               24
#define KOS_KEY_V               25
#define KOS_KEY_W               26
#define KOS_KEY_X               27
#define KOS_KEY_Y               28
#define KOS_KEY_Z               29

#define KOS_KEY_1               30
#define KOS_KEY_2               31
#define KOS_KEY_3               32
#define KOS_KEY_4               33
#define KOS_KEY_5               34
#define KOS_KEY_6               35
#define KOS_KEY_7               36
#define KOS_KEY_8               37
#define KOS_KEY_9               38
#define KOS_KEY_0               39

#define KOS_KEY_RETURN          40
#define KOS_KEY_ESCAPE          41
#define KOS_KEY_ESC             41
#define KOS_KEY_BACKSPACE       42
#define KOS_KEY_TAB             43
#define KOS_KEY_SPACE           44

#define KOS_KEY_MINUS           45
#define KOS_KEY_EQUALS          46
#define KOS_KEY_LEFTBRACKET     47
#define KOS_KEY_RIGHTBRACKET    48
#define KOS_KEY_BACKSLASH       49
#define KOS_KEY_NONUSHASH       50
#define KOS_KEY_SEMICOLON       51
#define KOS_KEY_APOSTROPHE      52
#define KOS_KEY_GRAVE           53
#define KOS_KEY_TILDE           53
#define KOS_KEY_COMMA           54
#define KOS_KEY_PERIOD          55
#define KOS_KEY_SLASH           56

#define KOS_KEY_CAPSLOCK        57

#define KOS_KEY_F1              58
#define KOS_KEY_F2              59
#define KOS_KEY_F3              60
#define KOS_KEY_F4              61
#define KOS_KEY_F5              62
#define KOS_KEY_F6              63
#define KOS_KEY_F7              64
#define KOS_KEY_F8              65
#define KOS_KEY_F9              66
#define KOS_KEY_F10             67
#define KOS_KEY_F11             68
#define KOS_KEY_F12             69

#define KOS_KEY_PRINTSCREEN     70
#define KOS_KEY_SCROLLLOCK      71
#define KOS_KEY_PAUSE           72
#define KOS_KEY_INSERT          73
#define KOS_KEY_HOME            74
#define KOS_KEY_PAGEUP          75
#define KOS_KEY_DELETE          76
#define KOS_KEY_END             77
#define KOS_KEY_PAGEDOWN        78

#define KOS_KEY_RIGHT           79
#define KOS_KEY_LEFT            80
#define KOS_KEY_DOWN            81
#define KOS_KEY_UP              82

#define KOS_KEY_NUMLOCK         83
#define KOS_KEY_KP_DIVIDE       84
#define KOS_KEY_KP_MULTIPLY     85
#define KOS_KEY_KP_MINUS        86
#define KOS_KEY_KP_PLUS         87
#define KOS_KEY_KP_ENTER        88
#define KOS_KEY_KP_1            89
#define KOS_KEY_KP_2            90
#define KOS_KEY_KP_3            91
#define KOS_KEY_KP_4            92
#define KOS_KEY_KP_5            93
#define KOS_KEY_KP_6            94
#define KOS_KEY_KP_7            95
#define KOS_KEY_KP_8            96
#define KOS_KEY_KP_9            97
#define KOS_KEY_KP_0            98
#define KOS_KEY_KP_PERIOD       99

#define KOS_KEY_APPLICATION     101
#define KOS_KEY_CONTEXT         101
#define KOS_KEY_LCTRL           224
#define KOS_KEY_LSHIFT          225
#define KOS_KEY_LALT            226
#define KOS_KEY_LGUI            227
#define KOS_KEY_LWINDOWS        227
#define KOS_KEY_RCTRL           228
#define KOS_KEY_RSHIFT          229
#define KOS_KEY_RALT            230
#define KOS_KEY_RGUI            231
#define KOS_KEY_RWINDOWS        231

#endif