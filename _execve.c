#include "main.h"

/**
 * _execve - execve
 * @pathname: input
 * @argv: input
 * @envp: input
 * Return: status
 */
int _execve(const char *pathname, char *const argv[], char *const envp[])
{
	pid_t c_pid = _fork();

	if (c_pid == -1)
	{
		perror("fork");
		return (-1); /*Error occurred during forking*/
	}

	if (c_pid == 0)
	{
		/*child process*/
		_execve(pathname, argv, envp);
		perror("execve"); /*execve only returns if an error occurs*/
		exit(EXIT_FAILURE);
	}
	else
	{
		/*parent process*/
		int status;

		_waitpid(c_pid, &status, 0);
		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
		else if (WIFSIGNALED(status))
			return (-WTERMSIG(status));
		else
			return (-1);
	}
}
