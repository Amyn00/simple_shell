#include "main.h"

/**
 * _fork - fork new process
 * Return: pid
 */

pid_t _fork(void)
{
	pid_t pid;

	pid = fork();
	return (pid);
}
