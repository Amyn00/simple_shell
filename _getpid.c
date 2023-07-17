#include "main.h"

/**
 * _getpid - get my pid 'Process ID'
 * Return: pid
 */

pid_t _getpid(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u", my_pid);
	return (my_pid);
}
