//  Código base para los algoritmos de ordenamiento
#include <stdio.h>			//  Para la i/o del programa
#include <stdlib.h>			// Para el system() y rand(), srand()
#include <time.h>			//  Para time()

#define SIZE 150
void burbuja(int arr[], int n);

void imprimeArreglo(int arr[], int dimension)
{
	int i;
	for(i = 0; i < dimension; i++)
		printf("%d, ", arr[i]);
	putchar('\n');
}


void burbuja(int arr[], int n)
{
		//  Programe su algoritmo de ordenamiento aquí
}


int main(void)
{
	int arreglo[SIZE], i;

	srand( time(0) );				//  Creamos la semilla de los numeros aleatorios

	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % 1000;

	printf("Arreglo desordenado:\n");
	imprimeArreglo(arreglo, SIZE-1);

	//  Invoque su algoritmo de ordenamiento aquí
	burbuja(arreglo, SIZE);

	printf("\nArreglo ordenado:\n");
	imprimeArreglo(arreglo, SIZE-1);
	
	system("pause");
	return 0;
}