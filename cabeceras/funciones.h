/* Declaración de funciones (cabeceras) */
#pragma once
// línea anterior evita duplicidad de código

#include <iostream>
#include <vector>
using namespace std;

// Suma de dos números reales:
double suma(double a, double b);

// Resta de dos números reales:
double resta(double a, double b);

// Multiplicación de dos números reales:
double multiplicacion(double a, double b);

// División de dos números reales:
double division(double a, double b);

// Evalúa si un número es positivo o no:
bool positivo(int num);

// Evalúa si un número es par o no:
bool par(int num);

// Cuadrado de un número:
int cuadrado(int x);

// Área de un círculo:
double circulo(double x);

// Números pares entre 1 y n:
void pares(int x);

// Si un numero es múltiplo de 5:
bool cinco(int x);

// Perímetro de un rectángulo:
double perim_rect(double a, double b);

// Si un triángulo es equilátero:
bool equilatero(double a, double b, double c);

// Imprimir elementos de un arreglo:
void imprimir_arreglo(int a[], int n);

// Imprimir elementos de un vector:
void imprimir_vector(vector<int> &v);
