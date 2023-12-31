#include "main.h"
/**
 * jack_bauer - program that print every minute of the day of jack
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		min = 0;
		hour++;
	}
}
