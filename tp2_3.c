// --- LIBRARIES

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- CONSTANTS

#define N 5
#define M 7

// --- FUNCTIONS

// --- MAIN

int main(){

	srand((int)time(NULL));

	int matriz[N][M], i=0, j=0;
	int (*matrizP)[M] = &matriz[0];

	for ( i = 0; i < N; i++){

		for ( j = 0; j < M; j++){

			matrizP[i][j]= 1+rand()%100;
			printf(" [%d](%d, %d)\t", matriz[i][j], i, j);

		}

	}

}

// --- FUNCTIONS