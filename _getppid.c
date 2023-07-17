#include "main.h"

/**
 * _getppid - get my ppid 'Parent Process ID'
 * Return: ppid
 */

pid_t _getppid(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u", my_ppid);
	return (my_ppid);
}
