#include <stdio.h>
/**
 * main - prints single digit numbers from 0-9
 * followed by new line using only putchar
(*
 * Return: 0 on sucess
 */
int main(void)
{
	int i;

	for(i = '0'; i <= '9'; i++)

	{
		putchar (i);
	}

	putchar ('\n');
	return(0);
}
