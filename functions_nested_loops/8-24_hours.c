#include <stdio.h>

/**
 * jack_bauer - Prints every minute of Jack Bauer's day
 *
 * Description: Prints time in HH:MM format
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
	printf("%02d:%02d\n", hour, minute);
	}
}
}
