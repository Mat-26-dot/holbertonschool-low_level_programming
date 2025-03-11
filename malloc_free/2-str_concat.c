#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *safe_s1;
	char *safe_s2;
	int i;

	if (s1 == 0)
	{
	if (s2 == 0)
		
			
		safe_s1 = (s1 == NULL) ? "" :s1;
	
	if (s1 == NULL)
		safe_s1 = "";
	else (safe_s1 = s1);

	size_t len_s1 = strlen(safe_s1);
	size_t len_s2 = strlen(safe_s2);
