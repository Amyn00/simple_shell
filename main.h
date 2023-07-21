#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
/*#include <errno.h>
#include <sys/errno.h>

extern char **environ;

int _putchar(char);
char *_strncat(char *dest, char *src, int n);
pid_t _getpid(void);
pid_t _getppid(void);
pid_t _fork(void);
void prompt(void);
int _execve(const char *pathname, char *const argv[], char *const envp[]);
pid_t _waitpid(pid_t pid, int *wstatus, int options);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);*/

/*#define IBS 64*/
/*INITIAL BUFFER SIZE*/
/*#define BGF 2*/
/*BUFFER GROWING FACTOR*/
#define MCL 100 /*MAX COMMAND LENGHT*/

#endif
