#ifndef KOS_KI_LIB_H
#define KOS_KI_LIB_H

#include <stdlib.h>
#include <stdint.h>

#include "bool.h"

#include "kos_ki.h"

bool *currentKeystate;              /* Текущее состояние клавиатуры    */
bool previousKeystate[232];         /* Предыдущее состояние клавиатуры */

bool *keyboardState;

#endif

