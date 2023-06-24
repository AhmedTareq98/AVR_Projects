
#include "Dio.h"
#include "Direction.h"


void    Dir_Motion_Init      (void){

    Dio_SetPinMode(DIO_PORTC, DIO_PIN0, DIO_MODE_OUTPUT);
    Dio_SetPinMode(DIO_PORTC, DIO_PIN1, DIO_MODE_OUTPUT);
    Dio_SetPinMode(DIO_PORTC, DIO_PIN2, DIO_MODE_OUTPUT);
    Dio_SetPinMode(DIO_PORTC, DIO_PIN3, DIO_MODE_OUTPUT);
}

void    Dir_StoP    (void){

    Dio_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN2, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN3, DIO_LEVEL_LOW);

}


void    Dir_Forward    (void){

    Dio_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN2, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN3, DIO_LEVEL_LOW);
}


void    Dir_Backward   (void){

    Dio_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN2, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN3, DIO_LEVEL_HIGH);
}


void    Dir_Right      (void){

    Dio_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN2, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN3, DIO_LEVEL_LOW);
}


void    Dir_Left       (void){

    Dio_SetPinLevel(DIO_PORTC, DIO_PIN0, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN1, DIO_LEVEL_LOW);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN2, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(DIO_PORTC, DIO_PIN3, DIO_LEVEL_LOW);
}

