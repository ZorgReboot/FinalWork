#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//пункт №1
int main()
{
	setlocale(LC_ALL, "Rus");

	//создание и вывод массива

	int A[20];
<<<<<<< HEAD
	int count = -10;
	int m1 = 0;
	int m2 = 0;
=======
	int count = -10, m01 = 0, m2 = 0;
>>>>>>> 4a9f7c2bb1347cd1498850fd4d3636b46cbc22b1

	printf("Массив: ");
	for (int i = 0; i < 20; i++) {
		A[i] = count;
		count++;
		printf("%d ", A[i]);
	}

	//Ввод m1 и m2

	printf("\nВведите m1 и m2 : \n");
	scanf("%d", &m1);
	scanf("%d", &m2);

	//подсчёт и вывод

	printf("\n(1)Массив: ");
	for (int i = 0; i < 20; i++) {
		if (A[i] > 0) {
			A[i] = A[i] + A[m1];
			printf("%d ", A[i]);
		}
		else {
			A[i] = A[i] + A[m2];
			printf("%d ", A[i]);
		}
	}

	//пункт №2

//создание и вывод двумерного массива
	int B[5][5]; 
	int a = 2;
	int b = 1;
	int dop1[] = { 0,0,0,0,0 }; //Дополнительный массив
	int dop2[] = { 0,0,0,0,0 };

	printf("\n(2)Массив: \n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			B[i][j] = rand() % 100;
	}

	//вывод двумерного массива

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%5d", B[i][j]);
		printf("\n");
	}

	//подсчёт

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (B[i][j] % a == 0) { dop1[j]++; }
			if (B[i][j] % b == 0) { dop2[j]++; }
		}
	}
	printf("\na:");
	for (int i = 0; i < 5; i++) {
		printf("%5d", dop1[i]);
	}
	printf("\nb:");
	for (int i = 0; i < 5; i++) {
		printf("%5d", dop2[i]);
	}

}