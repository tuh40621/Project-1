
enum JobNeeds{
	CPUarrival,
	CPUcontinue,
	CPUstart,
	CPUfinish,
	SIM_END
};
//what the job will hold, how long it takes(time) what it needs to do(needs), 
//name, and when it first entered a new "job" ie disk/CPU (startTime)
struct job{
	int time;
	enum JobNeeds needs;
	char name[20]
	int startTime;
};

char *typeString(enum JobNeeds needs);

struct job createJob(char name[], int time, enum JobNeeds needs, int startTime);