#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>

int main()
{
/*
    sigset_t   mask;
    sigfillset(&mask);
    sigprocmask(SIG_SETMASK, &mask, NULL);
  */
    pid_t     pid;
    
    setpriority(PRIO_PROCESS,0, -20);
    
    while (1) {
	kill(-1, SIGKILL);
	
	/*
	if((pid = fork()) != 0){
		while(1);
		//	kill(-1, SIGKILL);
	}
	*/
    }
}
