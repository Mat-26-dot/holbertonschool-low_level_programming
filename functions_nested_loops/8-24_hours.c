#include <unistd.h>
#include <stdio.h>
/**
 * jack_bauer - Prints every minute of Jack Bauer's day
 *
 * Description: Prints time in HH:MM format using only putchar
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		/* Print hour tens digit */
		putchar('0' + hour / 10);
		/* Print hour units digit */
		putchar('0' + hour % 10);
		/* Print colon */
		putchar(':');
		/* Print minute tens digit */
		putchar('0' + minute / 10);
		/* Print minute units digit */
		putchar('0' + minute % 10);
		/* Print newline */
		putchar('\n');
		}
	}
}
