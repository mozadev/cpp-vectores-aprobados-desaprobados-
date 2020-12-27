#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
using namespace System;
int NumeroAlumnos()
{
	int N;
	cout << "Ingrese el numero de alumnos:"; cin >> N;
	while (N <= 0 || N >= 40)
	{
		cout << "Ingrese otra vez el numero de alumnos:"; cin >> N;
	}
	return N;
}
void IngresaNotas(int *N, float *Nota)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Ingrese la Nota del parcial del primer alumno: " << i + 1 << " :";
		cin >> Nota[i];
	}
}
void Lista(int *N, float *Nota)
{
	int Cero = 0, Dos = 0, Aprovados = 0, Desaprovados = 0;
	for (int i = 1; i < *N; i++)
		if (Nota[i] == 0)
		{
			Cero++;
		}
	for (int i = 1; i < *N; i++)
		if (Nota[i] == 2)
		{
			Dos++;
		}
	for (int i = 1; i < *N; i++)
		if (Nota[i] >= 13 && Nota[i] <= 20)
		{
		Aprovados++;
		}	
	for (int i = 1; i < *N; i++)
		if (Nota[i] >= 0 && Nota[i] < 13)
		{
		Desaprovados++;
		}
	cout << "La cantidad de alumnos que obtuvieron 00:" << Cero << endl;
	cout << "La cantidad de alumnos que obtuvieron 2:" << Dos << endl;
	cout << "La cantidad de alumnos aprobadas:" << Aprovados << endl;
	cout << "La cantidad de alumnos desaprobadas:" << Desaprovados << endl;
	
}
int main()
{
	int N = NumeroAlumnos();
	float *Nota;
	Nota = new float[N];
	IngresaNotas(&N, Nota);
	Lista(&N, Nota);
	_getch();
	delete[N] Nota;
}