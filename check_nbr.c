#include "monty.h"

/**
  *check_nbr - check whether a string contains numbers only
  *@str: string to check
  *Return: 1 for has characters that are not integer
  */
int check_nbr(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[0] == '-')
		{
			;
		}
		else if (isdigit(str[i]) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
