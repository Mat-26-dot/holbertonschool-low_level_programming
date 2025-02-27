#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 **/
void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;
	char temp;


	while (start < end)
	{

	temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}
