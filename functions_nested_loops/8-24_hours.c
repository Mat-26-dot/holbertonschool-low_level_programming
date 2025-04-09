#include <unistd.h>

/**
 * print_time - Helper function to print a time value
 * @hour: Current hour
 * @minute: Current minute
 */
static void print_time(int hour, int minute)
{
	char time_str[6];

	time_str[0] = '0' + hour / 10;
	time_str[1] = '0' + hour % 10;
	time_str[2] = ':';
	time_str[3] = '0' + minute / 10;
	time_str[4] = '0' + minute % 10;
	time_str[5] = '\n';

	write(1, time_str, 6);
}

/**
 * jack_bauer - Prints every minute of Jack Bauer's day
 *
 * Description: Prints time in HH:MM format using write
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		print_time(hour, minute);
	}
	}
}
