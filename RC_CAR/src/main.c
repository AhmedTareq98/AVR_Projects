

#include "Direction.h"
#include "Uart.h"


int main (void){

    u8 data;

    Dir_Motion_Init();
    Uart_Init();
    
	while (1)
	{   
		data = Uart_Receive();

        switch (data)
        {
        case 'A':
            Dir_Forward();
            break;

        case 'B':
            Dir_Backward();
            break;

        case 'C':
            Dir_Right();
            break;

        case 'D':
            Dir_Left();
            break;

        default:
        	Dir_StoP();
            break;
        }
	}


}

