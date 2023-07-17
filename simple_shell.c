#include "main.h"
#include <stdio.h>

/**
 * main - the main prog
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	char *cmd = NULL;
	size_t cmd_size = 0;
	ssize_t l_len;
	int status;
	pid_t pid;

	while (1)
	{
		prompt();
		l_len = _getline(&cmd, &cmd_size, stdin);
		if (l_len == -1)
		{
			printf("\n");
			break;
		}
		cmd[l_len - 1] = '\0';
		pid = _fork();
		if (pid < 0)
		{
			perror("Fork faild");
			exit(1);
		}
		else if (pid == 0)
		{
			char *args[2];

			args[0] = cmd;
			args[1] = NULL;
			if (_execve(cmd, args, environ) == -1)
			{
				printf("%s: No such file or directory\n", argv[0]);
				exit(1);
			}
		}
		else
			_waitpid(pid, &status, 0);
	}
	free(cmd);
	return (0);
}
