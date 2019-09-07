#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define RANGE 1000

int ranNum(int low, int high){
	return (int) (low + random() % (high-low));
}

void randomMaker(unsigned seed){
	#define RAND_SIZE 256
	static char rand_start[RAND_SIZE];
	initstate(seed, rand_start, RAND_SIZE);
}

bool chance(double odds){
	double num=ranNum(1,1001)/1000.0;
	return num<odds;
}