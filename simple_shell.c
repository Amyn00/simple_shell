#include "main.h"

/**
 * _prompt - prompt cisfun
 */

void _prompt()
{
	printf("#cisfun$ ");
}

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
	ssize_t cmd_len;
	/*int status;*/
	pid_t pid;
	char *args[2];

	while (1)
	{
		_prompt();
		cmd_len = getline(&cmd, &cmd_size, stdin);
		if (cmd_len == -1)
		{
			break;
		}
		cmd[cmd_len - 1] = '\0';
		pid = fork();
		if (pid < 0)
		{
			perror("Fork faild");
			exit(1);
		}
		else if (pid == 0)
		{
			args[0] = cmd;
			args[1] = NULL;
			execve(cmd, args, NULL);
			perror("%s: No such file or directory\n", argv[0]);
			exit(1);
		}
		else
			wait(NULL);
	}
	free(cmd);
	return (0);
}
