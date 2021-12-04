#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>



void main(void)
{

void For_B() // Motor B drive clockwise
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

void Rev_B() // Motor B drive anticlockwise
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

void For_D() // Motor D drive clockwise
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

void Rev_D() // Motor D drive anticlockwise
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

void ForB_ForD() // Motor B and D both drive clockwise
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

void RevB_RevD() // Motor B and D both drive anticlockwise
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

void ForB_RevD() // Motor B drive clockwise and Motor D drive anticlockwise
{
PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD = 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD = 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait
}

void RevB_ForD() // Motor B drive anticlockwise and Motor D drive clockwise
{
PORTB =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait

PORTD= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTB =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTD= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTB= 0b00110010;   //ENA ,ENB &IN2=1 
_delay_ms(50);       //Wait

PORTD =0b00111000;   //ENA,ENAB &IN4=1 
_delay_ms(50);       //Wait

PORTB= 0b00110100;   //ENA ENB & IN3=1 Others=0
_delay_ms(50);       //Wait

PORTD =0b00110001;   //ENA,ENB & IN1=1 othere=0
_delay_ms(50);       // wait
}

// Over loop

int j; // Defined intiger J for the For loop

// Define Port for Output

DDRB =0xFF; // Port B defined for Output
DDRD =0xFF; // Port D defined for Output

while (1) //loop forever
{

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Print B @@@@@@@@@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<10;j++)
{
Rev_B();
}

for(j=0;j<5;j++)
{
For_D();
}

for(j=0;j<2;j++)
{
ForB_ForD();
}

for(j=0;j<1;j++)
{
For_B();
}

for(j=0;j<2;j++)
{
ForB_RevD();
}

for(j=0;j<5;j++)
{
Rev_D();
}

for(j=0;j<5;j++)
{
For_D();
}

for(j=0;j<2;j++)
{
ForB_ForD();
}

for(j=0;j<1;j++)
{
For_B();
}

for(j=0;j<2;j++)
{
ForB_RevD();
}

for(j=0;j<5;j++)
{
Rev_D();
}

for(j=0;j<8;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@@@@@ Print R @@@@@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<3;j++)
{
RevB_ForD();
}

for(j=0;j<2;j++)
{
Rev_B();
}

for(j=0;j<2;j++)
{
Rev_D();
}

for(j=0;j<2;j++)
{
For_B();
}

for(j=0;j<4;j++)
{
For_D();
}

for(j=0;j<1;j++)
{
For_B();
}

for(j=0;j<1;j++)
{
ForB_RevD();
}

for(j=0;j<1;j++)
{
For_B();
}

for(j=0;j<3;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@@@ Print I @@@@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<5;j++)
{
Rev_B();
}

for(j=0;j<1;j++)
{
For_D();
}

for(j=0;j<5;j++)
{
For_B();
}

for(j=0;j<1;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@@@@ Print J @@@@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<5;j++)
{
Rev_B();
}

for(j=0;j<3;j++)
{
For_D();
}

for(j=0;j<8;j++)
{
For_B();
}

for(j=0;j<3;j++)
{
Rev_D();
}

for(j=0;j<1;j++)
{
Rev_B();
}

for(j=0;j<3;j++)
{
RevB_ForD();
}

for(j=0;j<2;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@@ Print E @@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<1;j++)
{
Rev_B();
}

for(j=0;j<3;j++)
{
For_D();
}

for(j=0;j<2;j++)
{
Rev_B();
}

for(j=0;j<3;j++)
{
Rev_D();
}

for(j=0;j<4;j++)
{
For_B();
}

for(j=0;j<5;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@ Print S @@@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<3.5;j++)
{
For_D();
}

for(j=0;j<2.5;j++)
{
Rev_B();
}

for(j=0;j<3.5;j++)
{
Rev_D();
}

for(j=0;j<2.5;j++)
{
Rev_B();
}

for(j=0;j<3;j++)
{
For_D();
}

//@@@@@@@@@@@@@@@@@@@@@@ Print H @@@@@@@@@@@@@@@@@@@@@@

for(j=0;j<4;j++)
{
RevB_ForD();
}

for(j=0;j<8;j++)
{
For_B();
}

for(j=0;j<3;j++)
{
Rev_B();
}

for(j=0;j<2;j++)
{
For_D();
}

for(j=0;j<3;j++)
{
For_B();
}

for(j=0;j<2;j++)
{
For_D();
}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
}
