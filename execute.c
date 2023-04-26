#include "holberton.h"
/**
 * execute_proc - works as puts in C
 * @cmd: a ponter to the integer being set to 402
 *
 * Return: int
 */
void execute_proc(char **cmd)
{

	char *supermetro = (*(cmd + 1));
	char *s, *slash = "/";
	char *o;

	char *superprint = *cmd;
	char *argv[4];

	if ((access(cmd[0], F_OK) == 0))
	{
		argv[0] = cmd[0];
		argv[1] = supermetro;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		o = find_command(superprint);

		slash = str_concat(o, slash);

		s = str_concat(slash, *cmd);

		argv[0] = s;
		argv[1] = supermetro;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}
