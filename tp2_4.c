// --- LIBRARIES

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- STRUCTURES

struct compu {
	int velocidad;   //entre 1 y 3 GHz
	int anio; 		  //entre 2015 y 2022
	int cantidad; 	   //entre 1 y 4
	char *tipo_cpu; 	//valores del arreglo tipos
};
typedef struct compu Aspects;

// --- CONSTANTS

#define N 4

// --- FUNCTIONS

void presentarCompu(Aspects compu[N]);
void listaMasVieja(Aspects compu[N]);
void mayorVelocidad(Aspects compu[N]);

// --- MAIN

int main(){
	srand((int)time(NULL));

	Aspects Computadora[N];

	char tipos[6][10] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};

	for (short i = 0; i < 5; i++)
	{

		Computadora[i].velocidad = rand() % (3 + 1 - 1) + 1;

		Computadora[i].anio = rand() % (2022 + 1 - 2015) + 2015;

		Computadora[i].cantidad = rand() % (8 + 1 - 1) + 1;

		Computadora[i].tipo_cpu = &tipos[rand()%6][0];
	}

	presentarCompu(Computadora);
	listaMasVieja(Computadora);
	mayorVelocidad(Computadora);

}

// --- FUNCTIONS

void presentarCompu(Aspects compu[N]){

	for (short i = 1; i < 5; i++)
	{
		printf("\n||========================================||\n");

		printf("\nComputadora numero [%d]:", i);
		printf("\n	Velocidad: %d", compu[i].velocidad);
		printf("\n	Anio: %d", compu[i].anio);
		printf("\n	Cantidad: %d", compu[i].cantidad);
		printf("\n	Tipo de CPUs: %s", compu[i].tipo_cpu);

	}	

}

void listaMasVieja(Aspects compu[N]){

	Aspects masVieja = compu[0];
	int j = 0;

    for (int i = 1; i < 5; i++){

        if(compu[i].anio < masVieja.anio){
			
			masVieja = compu[i];
        	j = i;

        }
    }

	printf("\n||========================================||\n");

	printf("\nComputadora numero [%d]:", j);
	printf("\n	Velocidad: %d", compu[j].velocidad);
	printf("\n	Anio: %d", compu[j].anio);
	printf("\n	Cantidad: %d", compu[j].cantidad);
	printf("\n	Tipo de CPUs: %s\n", compu[j].tipo_cpu);

}

void mayorVelocidad(Aspects compu[N]){

	Aspects masRapido = compu[0];
	int j = 0;

    for (int i = 1; i < 5; i++){
		
        if(compu[i].velocidad > masRapido.velocidad){

			masRapido = compu[i];
        	j = i;

        }
    }

	printf("\n||========================================||\n");

	printf("\nComputadora numero [%d]:", j);
	printf("\n	Velocidad: %d", compu[j].velocidad);
	printf("\n	Anio: %d", compu[j].anio);
	printf("\n	Cantidad: %d", compu[j].cantidad);
	printf("\n	Tipo de CPUs: %s\n", compu[j].tipo_cpu);

}