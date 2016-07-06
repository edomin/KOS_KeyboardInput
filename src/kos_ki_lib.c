#include "kos_ki_lib.h"

void kolibrios_InputSetScancodeMode(void)
{
    __asm__ __volatile__(
    "int $0x40"
    :
    :"a"(66),"b"(1),"c"(1)
    :"memory");
}

uint8_t kolibrios_InputGetScancode(void)
{
    uint32_t eax;

    __asm__ __volatile__(
    "int $0x40"
    :"=a"(eax)
    :"a"(2)
    :"memory");

    if (eax != 1)
    {
        return (uint8_t)(eax >> 8);
    }
    else
    {
        return 0;
    }
}

bool *GetKeyboardState(void)
{
    uint8_t scancode;
    uint8_t scancode2;
    uint8_t scancode4;

    scancode = kolibrios_InputGetScancode();
    switch (scancode)
    {
        case 0x1E:
            keyboardState[KOS_KEY_A] = 1;
            break;
        case 0x30:
            keyboardState[KOS_KEY_B] = 1;
            break;
        case 0x2E:
            keyboardState[KOS_KEY_C] = 1;
            break;
        case 0x20:
            keyboardState[KOS_KEY_D] = 1;
            break;
        case 0x12:
            keyboardState[KOS_KEY_E] = 1;
            break;
        case 0x21:
            keyboardState[KOS_KEY_F] = 1;
            break;
        case 0x22:
            keyboardState[KOS_KEY_G] = 1;
            break;
        case 0x23:
            keyboardState[KOS_KEY_H] = 1;
            break;
        case 0x17:
            keyboardState[KOS_KEY_I] = 1;
            break;
        case 0x24:
            keyboardState[KOS_KEY_J] = 1;
            break;
        case 0x25:
            keyboardState[KOS_KEY_K] = 1;
            break;
        case 0x26:
            keyboardState[KOS_KEY_L] = 1;
            break;
        case 0x32:
            keyboardState[KOS_KEY_M] = 1;
            break;
        case 0x31:
            keyboardState[KOS_KEY_N] = 1;
            break;
        case 0x18:
            keyboardState[KOS_KEY_O] = 1;
            break;
        case 0x19:
            keyboardState[KOS_KEY_P] = 1;
            break;
        case 0x10:
            keyboardState[KOS_KEY_Q] = 1;
            break;
        case 0x13:
            keyboardState[KOS_KEY_R] = 1;
            break;
        case 0x1F:
            keyboardState[KOS_KEY_S] = 1;
            break;
        case 0x14:
            keyboardState[KOS_KEY_T] = 1;
            break;
        case 0x16:
            keyboardState[KOS_KEY_U] = 1;
            break;
        case 0x2F:
            keyboardState[KOS_KEY_V] = 1;
            break;
        case 0x11:
            keyboardState[KOS_KEY_W] = 1;
            break;
        case 0x2D:
            keyboardState[KOS_KEY_X] = 1;
            break;
        case 0x15:
            keyboardState[KOS_KEY_Y] = 1;
            break;
        case 0x2C:
            keyboardState[KOS_KEY_Z] = 1;
            break;
        case 0x0B:
            keyboardState[KOS_KEY_0] = 1;
            break;
        case 0x02:
            keyboardState[KOS_KEY_1] = 1;
            break;
        case 0x03:
            keyboardState[KOS_KEY_2] = 1;
            break;
        case 0x04:
            keyboardState[KOS_KEY_3] = 1;
            break;
        case 0x05:
            keyboardState[KOS_KEY_4] = 1;
            break;
        case 0x06:
            keyboardState[KOS_KEY_5] = 1;
            break;
        case 0x07:
            keyboardState[KOS_KEY_6] = 1;
            break;
        case 0x08:
            keyboardState[KOS_KEY_7] = 1;
            break;
        case 0x09:
            keyboardState[KOS_KEY_8] = 1;
            break;
        case 0x0A:
            keyboardState[KOS_KEY_9] = 1;
            break;
        case 0x29:
            keyboardState[KOS_KEY_TILDE] = 1;
            break;
        case 0x0C:
            keyboardState[KOS_KEY_MINUS] = 1;
            break;
        case 0x0D:
            keyboardState[KOS_KEY_EQUALS] = 1;
            break;
        case 0x2B:
            keyboardState[KOS_KEY_BACKSLASH] = 1;
            break;
        case 0x1A:
            keyboardState[KOS_KEY_LEFTBRACKET] = 1;
            break;
        case 0x1B:
            keyboardState[KOS_KEY_RIGHTBRACKET] = 1;
            break;
        case 0x27:
            keyboardState[KOS_KEY_SEMICOLON] = 1;
            break;
        case 0x28:
            keyboardState[KOS_KEY_APOSTROPHE] = 1;
            break;
        case 0x33:
            keyboardState[KOS_KEY_COMMA] = 1;
            break;
        case 0x34:
            keyboardState[KOS_KEY_PERIOD] = 1;
            break;
        case 0x35:
            keyboardState[KOS_KEY_SLASH] = 1;
            break;
        case 0x0E:
            keyboardState[KOS_KEY_BACKSPACE] = 1;
            break;
        case 0x39:
            keyboardState[KOS_KEY_SPACE] = 1;
            break;
        case 0x0F:
            keyboardState[KOS_KEY_TAB] = 1;
            break;
        case 0x3A:
            keyboardState[KOS_KEY_CAPSLOCK] = 1;
            break;
        case 0x2A:
            keyboardState[KOS_KEY_LSHIFT] = 1;
            break;
        case 0x1D:
            keyboardState[KOS_KEY_LCTRL] = 1;
            break;
        case 0x38:
            keyboardState[KOS_KEY_LALT] = 1;
            break;
        case 0x36:
            keyboardState[KOS_KEY_RSHIFT] = 1;
            break;
        case 0x1C:
            keyboardState[KOS_KEY_RETURN] = 1;
            break;
        case 0x01:
            keyboardState[KOS_KEY_ESCAPE] = 1;
            break;
        case 0x3B:
            keyboardState[KOS_KEY_F1] = 1;
            break;
        case 0x3C:
            keyboardState[KOS_KEY_F2] = 1;
            break;
        case 0x3D:
            keyboardState[KOS_KEY_F3] = 1;
            break;
        case 0x3E:
            keyboardState[KOS_KEY_F4] = 1;
            break;
        case 0x3F:
            keyboardState[KOS_KEY_F5] = 1;
            break;
        case 0x40:
            keyboardState[KOS_KEY_F6] = 1;
            break;
        case 0x41:
            keyboardState[KOS_KEY_F7] = 1;
            break;
        case 0x42:
            keyboardState[KOS_KEY_F8] = 1;
            break;
        case 0x43:
            keyboardState[KOS_KEY_F9] = 1;
            break;
        case 0x44:
            keyboardState[KOS_KEY_F10] = 1;
            break;
        case 0x57:
            keyboardState[KOS_KEY_F11] = 1;
            break;
        case 0x58:
            keyboardState[KOS_KEY_F12] = 1;
            break;
        case 0x46:
            keyboardState[KOS_KEY_SCROLLLOCK] = 1;
            break;
        case 0x45:
            keyboardState[KOS_KEY_NUMLOCK] = 1;
            break;
        case 0x37:
            keyboardState[KOS_KEY_KP_MULTIPLY] = 1;
            break;
        case 0x4A:
            keyboardState[KOS_KEY_KP_MINUS] = 1;
            break;
        case 0x4E:
            keyboardState[KOS_KEY_KP_PLUS] = 1;
            break;
        case 0x53:
            keyboardState[KOS_KEY_KP_PERIOD] = 1;
            break;
        case 0x52:
            keyboardState[KOS_KEY_KP_0] = 1;
            break;
        case 0x4F:
            keyboardState[KOS_KEY_KP_1] = 1;
            break;
        case 0x50:
            keyboardState[KOS_KEY_KP_2] = 1;
            break;
        case 0x51:
            keyboardState[KOS_KEY_KP_3] = 1;
            break;
        case 0x4B:
            keyboardState[KOS_KEY_KP_4] = 1;
            break;
        case 0x4C:
            keyboardState[KOS_KEY_KP_5] = 1;
            break;
        case 0x4D:
            keyboardState[KOS_KEY_KP_6] = 1;
            break;
        case 0x47:
            keyboardState[KOS_KEY_KP_7] = 1;
            break;
        case 0x48:
            keyboardState[KOS_KEY_KP_8] = 1;
            break;
        case 0x49:
            keyboardState[KOS_KEY_KP_9] = 1;
            break;

        case 0x9E:
            keyboardState[KOS_KEY_A] = 0;
            break;
        case 0xB0:
            keyboardState[KOS_KEY_B] = 0;
            break;
        case 0xAE:
            keyboardState[KOS_KEY_C] = 0;
            break;
        case 0xA0:
            keyboardState[KOS_KEY_D] = 0;
            break;
        case 0x92:
            keyboardState[KOS_KEY_E] = 0;
            break;
        case 0xA1:
            keyboardState[KOS_KEY_F] = 0;
            break;
        case 0xA2:
            keyboardState[KOS_KEY_G] = 0;
            break;
        case 0xA3:
            keyboardState[KOS_KEY_H] = 0;
            break;
        case 0x97:
            keyboardState[KOS_KEY_I] = 0;
            break;
        case 0xA4:
            keyboardState[KOS_KEY_J] = 0;
            break;
        case 0xA5:
            keyboardState[KOS_KEY_K] = 0;
            break;
        case 0xA6:
            keyboardState[KOS_KEY_L] = 0;
            break;
        case 0xB2:
            keyboardState[KOS_KEY_M] = 0;
            break;
        case 0xB1:
            keyboardState[KOS_KEY_N] = 0;
            break;
        case 0x98:
            keyboardState[KOS_KEY_O] = 0;
            break;
        case 0x99:
            keyboardState[KOS_KEY_P] = 0;
            break;
        case 0x90:
            keyboardState[KOS_KEY_Q] = 0;
            break;
        case 0x93:
            keyboardState[KOS_KEY_R] = 0;
            break;
        case 0x9F:
            keyboardState[KOS_KEY_S] = 0;
            break;
        case 0x94:
            keyboardState[KOS_KEY_T] = 0;
            break;
        case 0x96:
            keyboardState[KOS_KEY_U] = 0;
            break;
        case 0xAF:
            keyboardState[KOS_KEY_V] = 0;
            break;
        case 0x91:
            keyboardState[KOS_KEY_W] = 0;
            break;
        case 0xAD:
            keyboardState[KOS_KEY_X] = 0;
            break;
        case 0x95:
            keyboardState[KOS_KEY_Y] = 0;
            break;
        case 0xAC:
            keyboardState[KOS_KEY_Z] = 0;
            break;
        case 0x8B:
            keyboardState[KOS_KEY_0] = 0;
            break;
        case 0x82:
            keyboardState[KOS_KEY_1] = 0;
            break;
        case 0x83:
            keyboardState[KOS_KEY_2] = 0;
            break;
        case 0x84:
            keyboardState[KOS_KEY_3] = 0;
            break;
        case 0x85:
            keyboardState[KOS_KEY_4] = 0;
            break;
        case 0x86:
            keyboardState[KOS_KEY_5] = 0;
            break;
        case 0x87:
            keyboardState[KOS_KEY_6] = 0;
            break;
        case 0x88:
            keyboardState[KOS_KEY_7] = 0;
            break;
        case 0x89:
            keyboardState[KOS_KEY_8] = 0;
            break;
        case 0x8A:
            keyboardState[KOS_KEY_9] = 0;
            break;
        case 0xA9:
            keyboardState[KOS_KEY_TILDE] = 0;
            break;
        case 0x8C:
            keyboardState[KOS_KEY_MINUS] = 0;
            break;
        case 0x8D:
            keyboardState[KOS_KEY_EQUALS] = 0;
            break;
        case 0xAB:
            keyboardState[KOS_KEY_BACKSLASH] = 0;
            break;
        case 0x9A:
            keyboardState[KOS_KEY_LEFTBRACKET] = 0;
            break;
        case 0x9B:
            keyboardState[KOS_KEY_RIGHTBRACKET] = 0;
            break;
        case 0xA7:
            keyboardState[KOS_KEY_SEMICOLON] = 0;
            break;
        case 0xA8:
            keyboardState[KOS_KEY_APOSTROPHE] = 0;
            break;
        case 0xB3:
            keyboardState[KOS_KEY_COMMA] = 0;
            break;
        case 0xB4:
            keyboardState[KOS_KEY_PERIOD] = 0;
            break;
        case 0xB5:
            keyboardState[KOS_KEY_SLASH] = 0;
            break;
        case 0x8E:
            keyboardState[KOS_KEY_BACKSPACE] = 0;
            break;
        case 0xB9:
            keyboardState[KOS_KEY_SPACE] = 0;
            break;
        case 0x8F:
            keyboardState[KOS_KEY_TAB] = 0;
            break;
        case 0xBA:
            keyboardState[KOS_KEY_CAPSLOCK] = 0;
            break;
        case 0xAA:
            keyboardState[KOS_KEY_LSHIFT] = 0;
            break;
        case 0x9D:
            keyboardState[KOS_KEY_LCTRL] = 0;
            break;
        case 0xB8:
            keyboardState[KOS_KEY_LALT] = 0;
            break;
        case 0xB6:
            keyboardState[KOS_KEY_RSHIFT] = 0;
            break;
        case 0x9C:
            keyboardState[KOS_KEY_RETURN] = 0;
            break;
        case 0x81:
            keyboardState[KOS_KEY_ESCAPE] = 0;
            break;
        case 0xBB:
            keyboardState[KOS_KEY_F1] = 0;
            break;
        case 0xBC:
            keyboardState[KOS_KEY_F2] = 0;
            break;
        case 0xBD:
            keyboardState[KOS_KEY_F3] = 0;
            break;
        case 0xBE:
            keyboardState[KOS_KEY_F4] = 0;
            break;
        case 0xBF:
            keyboardState[KOS_KEY_F5] = 0;
            break;
        case 0xC0:
            keyboardState[KOS_KEY_F6] = 0;
            break;
        case 0xC1:
            keyboardState[KOS_KEY_F7] = 0;
            break;
        case 0xC2:
            keyboardState[KOS_KEY_F8] = 0;
            break;
        case 0xC3:
            keyboardState[KOS_KEY_F9] = 0;
            break;
        case 0xC4:
            keyboardState[KOS_KEY_F10] = 0;
            break;
        case 0xD7:
            keyboardState[KOS_KEY_F11] = 0;
            break;
        case 0xD8:
            keyboardState[KOS_KEY_F12] = 0;
            break;
        case 0xC6:
            keyboardState[KOS_KEY_SCROLLLOCK] = 0;
            break;
        case 0xC5:
            keyboardState[KOS_KEY_NUMLOCK] = 0;
            break;
        case 0xB7:
            keyboardState[KOS_KEY_KP_MULTIPLY] = 0;
            break;
        case 0xCA:
            keyboardState[KOS_KEY_KP_MINUS] = 0;
            break;
        case 0xCE:
            keyboardState[KOS_KEY_KP_PLUS] = 0;
            break;
        case 0xD3:
            keyboardState[KOS_KEY_KP_PERIOD] = 0;
            break;
        case 0xD2:
            keyboardState[KOS_KEY_KP_0] = 0;
            break;
        case 0xCF:
            keyboardState[KOS_KEY_KP_1] = 0;
            break;
        case 0xD0:
            keyboardState[KOS_KEY_KP_2] = 0;
            break;
        case 0xD1:
            keyboardState[KOS_KEY_KP_3] = 0;
            break;
        case 0xCB:
            keyboardState[KOS_KEY_KP_4] = 0;
            break;
        case 0xCC:
            keyboardState[KOS_KEY_KP_5] = 0;
            break;
        case 0xCD:
            keyboardState[KOS_KEY_KP_6] = 0;
            break;
        case 0xC7:
            keyboardState[KOS_KEY_KP_7] = 0;
            break;
        case 0xC8:
            keyboardState[KOS_KEY_KP_8] = 0;
            break;
        case 0xC9:
            keyboardState[KOS_KEY_KP_9] = 0;
            break;

        case 0xE0:
            scancode2 = kolibrios_InputGetScancode();
            switch (scancode2)
            {
                case 0x5B:
                    keyboardState[KOS_KEY_LGUI] = 1;
                    break;
                case 0x1D:
                    keyboardState[KOS_KEY_RCTRL] = 1;
                    break;
                case 0x38:
                    keyboardState[KOS_KEY_RALT] = 1;
                    break;
                case 0x5C:
                    keyboardState[KOS_KEY_RGUI] = 1;
                    break;
                case 0x5D:
                    keyboardState[KOS_KEY_APPLICATION] = 1;
                    break;
                case 0x52:
                    keyboardState[KOS_KEY_INSERT] = 1;
                    break;
                case 0x47:
                    keyboardState[KOS_KEY_HOME] = 1;
                    break;
                case 0x4F:
                    keyboardState[KOS_KEY_END] = 1;
                    break;
                case 0x49:
                    keyboardState[KOS_KEY_PAGEUP] = 1;
                    break;
                case 0x51:
                    keyboardState[KOS_KEY_PAGEDOWN] = 1;
                    break;
                case 0x53:
                    keyboardState[KOS_KEY_DELETE] = 1;
                    break;
                case 0x48:
                    keyboardState[KOS_KEY_UP] = 1;
                    break;
                case 0x4B:
                    keyboardState[KOS_KEY_LEFT] = 1;
                    break;
                case 0x50:
                    keyboardState[KOS_KEY_DOWN] = 1;
                    break;
                case 0x4D:
                    keyboardState[KOS_KEY_RIGHT] = 1;
                    break;
                case 0x35:
                    keyboardState[KOS_KEY_KP_DIVIDE] = 1;
                    break;
                case 0x1C:
                    keyboardState[KOS_KEY_KP_ENTER] = 1;
                    break;
                case 0x2A:
                    kolibrios_InputGetScancode();
                    scancode4 = kolibrios_InputGetScancode();
                    switch (scancode4)
                    {
                        case 0x48:
                            keyboardState[KOS_KEY_UP] = 1;
                            break;
                        case 0x4B:
                            keyboardState[KOS_KEY_LEFT] = 1;
                            break;
                        case 0x50:
                            keyboardState[KOS_KEY_DOWN] = 1;
                            break;
                        case 0x4D:
                            keyboardState[KOS_KEY_RIGHT] = 1;
                            break;
                        case 0x37:
                            keyboardState[KOS_KEY_PRINTSCREEN] = 1;
                            break;
                        default:
                            break;
                    }
                    break;

                case 0xDB:
                    keyboardState[KOS_KEY_LGUI] = 0;
                    break;
                case 0x9D:
                    keyboardState[KOS_KEY_RCTRL] = 0;
                    break;
                case 0xB8:
                    keyboardState[KOS_KEY_RALT] = 0;
                    break;
                case 0xDC:
                    keyboardState[KOS_KEY_RGUI] = 0;
                    break;
                case 0xDD:
                    keyboardState[KOS_KEY_APPLICATION] = 0;
                    break;
                case 0xD2:
                    keyboardState[KOS_KEY_INSERT] = 0;
                    break;
                case 0xC7:
                    keyboardState[KOS_KEY_HOME] = 0;
                    break;
                case 0xCF:
                    keyboardState[KOS_KEY_END] = 0;
                    break;
                case 0xC9:
                    keyboardState[KOS_KEY_PAGEUP] = 0;
                    break;
                case 0xD1:
                    keyboardState[KOS_KEY_PAGEDOWN] = 0;
                    break;
                case 0xD3:
                    keyboardState[KOS_KEY_DELETE] = 0;
                    break;
                case 0xC8:
                    keyboardState[KOS_KEY_UP] = 0;
                    break;
                case 0xCB:
                    keyboardState[KOS_KEY_LEFT] = 0;
                    break;
                case 0xD0:
                    keyboardState[KOS_KEY_DOWN] = 0;
                    break;
                case 0xCD:
                    keyboardState[KOS_KEY_RIGHT] = 0;
                    break;
                case 0xB5:
                    keyboardState[KOS_KEY_KP_DIVIDE] = 0;
                    break;
                case 0x9C:
                    keyboardState[KOS_KEY_KP_ENTER] = 0;
                    break;
                case 0xB7:
                    kolibrios_InputGetScancode();
                    scancode4 = kolibrios_InputGetScancode();
                    switch (scancode4)
                    {
                        case 0xC8:
                            keyboardState[KOS_KEY_UP] = 1;
                            break;
                        case 0xCB:
                            keyboardState[KOS_KEY_LEFT] = 1;
                            break;
                        case 0xD0:
                            keyboardState[KOS_KEY_DOWN] = 1;
                            break;
                        case 0xCD:
                            keyboardState[KOS_KEY_RIGHT] = 1;
                            break;
                        case 0xAA:
                            keyboardState[KOS_KEY_PRINTSCREEN] = 1;
                            break;
                        default:
                            break;
                    }
                    break;

                default:
                    break;
            }
            break;
        case 0xE1:
            kolibrios_InputGetScancode();
            kolibrios_InputGetScancode();
            kolibrios_InputGetScancode();
            kolibrios_InputGetScancode();
            kolibrios_InputGetScancode();
            /* pause_key */
            break;
        default:
            break;
    }
    return keyboardState;
}

int KeyboardInit(void)
{
    int i;
    
    kolibrios_InputSetScancodeMode();

    keyboardState = malloc(sizeof(bool) * KOS_KEYS_COUNT);
    if (keyboardState == NULL)
        return 1;
    for (i = 0; i < KOS_KEYS_COUNT; i++)
    {
        keyboardState[i] = 0;
    }

    currentKeystate = GetKeyboardState();
    if (currentKeystate == NULL)
        return 2;
    return 0;
}

void KeyboardQuit(void)
{
    free(keyboardState);
}

bool KeyboardKeyPress(uint8_t key)
{
    if ((currentKeystate[key]) &&
        !(previousKeystate[key]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool KeyboardKeyRelease(uint8_t key)
{
    if (!(currentKeystate[key]) &&
        (previousKeystate[key]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool KeyboardKeyPressed(uint8_t key)
{
    if (currentKeystate [key])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void KeyboardKeystatesRefresh(void)
{
    int i;
    for (i = 0; i < KOS_KEYS_COUNT; i++)
    {
        previousKeystate[i] = currentKeystate[i];
    }
    currentKeystate = GetKeyboardState();
}
