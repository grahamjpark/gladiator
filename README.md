# aTildeTheHun


##Viable strats
- Setpriority():
  - http://linux.die.net/man/2/setpriority
- Creating file with makefile, shell execute from within program to be outside arena
- Flash lite 	
	mypid = getpid();
	Start pkilling all above and below
- MMAP to keep track of which PIDs are ours

##Things we've learned

	#include <sys/resource.h>
    setpriority(PRIO_PROCESS, 0, -20); use it because it gave us EXTREME cpu time
	
	Flash uses setpriority in order to win, but its kill strat is better than kill(-1,SIGKILL)
   
    You cannot do getpid() then kill +/-



    proc has a lot of process info but requires reading the proc directory (SLOW)
    
    
##Funny names
- I'll make a manpage out of you
- Tailor Swift //Thread and fork on threads ... 1 CPU means context swtiching will inhibit us more then help
