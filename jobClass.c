#include <memory.h>
#include<randomNumbers.c>

/*	name of the variable and explination
* name:name ie job1, job2,ect
* timeLength: is the lenght of the job needed in each part until it is 
	finished (10 to 100 units of time)
* job_needs: what the job will have to do after going through the cpu,
	will be given initially to save confusion 
*startTime: the start of the job when entering the cpu/disk
*/

struct job createJob(char name[], int timeLength, enum jobNeeds needs, int startTime){
	struct job j;
	j.time=time;
	j.jobNeeds=needs;
	j.startTime=startTime;
	
	stpncpy(j.name, name, 15)
	return j;
}

//tracks and announces where certian noticable tasks are completed.
/*	Xarrival=entering into the x's queue
	xcontinue is going from queue through the queue list/into the X
	xStart is starting the time at the process and Xdone is when it's done
*/
char *type_string(enum JobNeeds needs){
	switch(needs){
		case CPUarrival:
			return "CPUarrival";
		case CPUcontinue:
			return "CPUcontinue";
		case CPUstart:
			return "CPUstart";
		case CPUdone:
			return"CPUdone";
		case SIM_END:
			return"Simulation End";
	}
}