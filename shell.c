#include "holberton.h"

/**
 * main - infinite loop function
 * @ac: not must
 * @av: not must
 * Return: loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
