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
	int *vtPointer;

	vtPointer = &vt[0];

	for (int i = 0; i < N; i++)
	{
		*(vtPointer+i) = 1 + rand() % 100;
		printf("\t%d ", *(vtPointer+i));
	}
	
}