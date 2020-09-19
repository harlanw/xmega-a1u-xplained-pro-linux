#include <avr/io.h>
#define F_CPU 2000000UL
#include <util/delay.h>

int main(void)
{
	PORTQ.DIR = (1<<3);
	PORTQ.OUT &= ~(1<<3);

	for (;;)
	{
		PORTQ.OUT ^= (1<<3);
		_delay_ms(500);
	}

	return 0;
}
