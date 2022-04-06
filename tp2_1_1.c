// --- LIBRARIES

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- CONSTANTS

#define N 20

// --- FUNCTIONS

// --- MAIN

int main(){

	srand((int)time(NULL));

	int vt[N];

	for (int i = 1; i < N; i++)
	{
		vt[i] = 1 + rand() % 100;
		printf("\t%d", vt[i]);
	}
	
	return 0;
}

// --- FUNCTIONS