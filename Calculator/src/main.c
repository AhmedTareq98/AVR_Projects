
#include "Types.h"
#include "Lcd.h"
#include "Keypad.h"



int main(void)
{

    Keypad_ButtonType i     	;
    u8 flag[16] = {0}       	;
    u8 calc     =  0        	;
    u8 result   =  0        	;
    u8 current_operation = 0    ;

    Lcd_Init(&Lcd_Configuration);
    Keypad_Init();

    while (1)
    {
    	for(i = KEYPAD_BUTTON_00; i <= KEYPAD_BUTTON_15; i++)
        {
            if(Keypad_GetButtonState(i) == KEYPAD_PRESSED)
            {
                if(flag[i] == 0)
                {
                    flag[i] = 1;

                    if( i < KEYPAD_BUTTON_10 )
                    {
                        Lcd_DisplayNumber(i);
                        calc = calc *10 + i;
                    }
                    else
                    {
                        switch (i)
                        {
                            case KEYPAD_BUTTON_10:
                                if (current_operation == 12)
                                {
                                    result = result + calc;
                                }
                                else if (current_operation == 13)
                                {
                                    result = result - calc;
                                }
                                else if (current_operation == 14)
                                {
                                    result = result * calc;
                                }
                                else if (current_operation == 15)
                                {
                                    result = result / calc;
                                }
                                Lcd_SetCursorPosition(1,4);
                                Lcd_DisplayCharcter('=');
                                Lcd_DisplayNumber(result);
                                result = 0 ;
                                calc   = 0 ;
                                current_operation = 0;
                                break;

                            case KEYPAD_BUTTON_11:
                                Lcd_ClearDisplay();
                                result = 0 ;
                                calc   = 0 ;
                                current_operation = 0;
                                calc   = 0 ;
                                break;

                            case KEYPAD_BUTTON_12:
                                Lcd_DisplayCharcter('+');
                                current_operation = 12;
                                result = calc;
                                calc   = 0 ;
                                break;

                            case KEYPAD_BUTTON_13:
                                Lcd_DisplayCharcter('-');
                                current_operation = 13;
                                result = calc;
                                calc   = 0 ;
                                break;

                            case KEYPAD_BUTTON_14:
                                Lcd_DisplayCharcter('*');
                                current_operation = 14;
                                result = calc;
                                calc   = 0 ;
                                break;

                            case KEYPAD_BUTTON_15:
                                Lcd_DisplayCharcter('/');
                                current_operation = 15;
                                result = calc;
                                calc   = 0 ;
                                break;

                            default:
                                break;
                        }
                    }
                }
            }
            else
            {
                flag[i] = 0;
            }
        }
    }
}
