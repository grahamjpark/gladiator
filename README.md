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
    setpriority(PRIO_PROCESS, 0, -20); use it because it gave us one extra process

    You cannot do getpid() then kill +/-

    proc has all the info but, requires writing to file

##Funny names
- I'll make a manpage out of you
- Tailor Swift //Thread and fork on threads ... 1 CPU means context swtiching will inhibit us more then help
