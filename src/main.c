#include<avr/io.h>
#include<util/delay.h>

#define BV(x) (1<<x)

int main(void)
{
    DDRC=0xFF;
    PORTC=0xFF;
    while (1)
    {
        PORTC=~(BV(5));
        _delay_ms(1000);
        PORTC=BV(5);
        _delay_ms(1000);
    }
    return 0;
}
