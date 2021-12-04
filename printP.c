#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
int i,j;

//PA5=ENB ,PA4=ENA ,PA3=IN4,PA2=IN3,PA1=IN2,PA0=IN1

DDRB =0xFF;
DDRD =0xFF;
while (1) //loop forever
{

for (i=1;i<10;i++)    //Loop from 1 till 50
{
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//********************************PRINT N********************************
//reverse motor B

for(j=0;j<10;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}


//forward B forward D

for(j=0;j<10;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait


PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait


PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait


PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}


//reverse motor B

for(j=0;j<10;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//********************************PRINT O********************************
//forward motor D
    
for(j=0;j<2;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor B

for(j=0;j<10;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<10;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor B

for(j=0;j<10;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//reverse motor D

for(j=0;j<10;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD = 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD = 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor D
    
for(j=0;j<12;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//********************************PRINT B********************************

//forward motor B

for(j=0;j<10;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<10;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}


//reverse motor B

for(j=0;j<5;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//reverse motor D

for(j=0;j<10;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor D

for(j=0;j<10;j++)
{

PORTD = 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD = 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor B

for(j=0;j<5;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//reverse motor D

for(j=0;j<10;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//********************************PRINT L********************************

//forward motor D
    
for(j=0;j<12;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor B

for(j=0;j<10;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<10;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor B

for(j=0;j<2;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor D
    
for(j=0;j<2;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//********************************PRINT E********************************

//reverse motor B

for(j=0;j<8;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor D
    
for(j=0;j<10;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor D

for(j=0;j<10;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor B

for(j=0;j<5;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<10;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor D

for(j=0;j<10;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward motor B

for(j=0;j<5;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<14;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//%%%%%%%%%%%%%%%%%%%%%%% LINE %%%%%%%%%%%%%%%%%%%%%%%%%

//forward motor B

for(j=0;j<2;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse motor D

for(j=0;j<60;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//forward B forward D

for(j=0;j<2;j++)
{

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait


PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait


PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait


PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//forward motor D
    
for(j=0;j<56;j++)
{  

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

}

//reverse B reverse D

for(j=0;j<2;j++)
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

//reverse motor D

for(j=0;j<52;j++)
{
PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

}
}
}


