/* Declaración de funciones (cabeceras) */

// Evitar duplicidad de código:
#pragma once

#include <iostream>
#include <vector>
using namespace std;

double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
bool positivo(int num);
bool par(int num);
int cuadrado(int x);
double circulo(double x);
void pares(int x);
bool cinco(int x);
double perim_rect(double a, double b);
bool equilatero(double a, double b, double c);
void imprimir_arreglo(int a[], int n);
void imprimir_vector(vector<int> &v);
double notas_media_c(double *a, int cant);
double notas_media_cpp(vector<double> &vec);
void multiplicar_arreglo(double *a, int tam, double fac);
void multiplicar_vector(vector<double> &vec, double fac);
