/* Definición de funciones */
#include "../cabeceras/funciones.h"

double suma(double a, double b)
{
    return a + b;
}

double resta(double a, double b)
{
    return a - b;
}

double multiplicacion(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

bool positivo(int num)
{
    if(num > 0)
	return true;
    else
	return false;
}

bool par(int num)
{
    if(num % 2 == 0)
	return true;
    else
	return false;
}

int cuadrado(int x){
    return x * x;
}

double circulo(double x){
    return 3.1416 * x * x;
}

void pares(int x){
    cout << "Números pares entre 1 y " << x << ":" << endl;
    for(int i=2; i<x; i+=2){
	cout << i << " ";
    }
}

bool cinco(int x){
    if(x%5 == 0)
	return true;
    else
	return false;
}

double perim_rect(double a, double b)
{
  return 2*a + 2*b;
}

bool equilatero(double a, double b, double c)
{
  if(a == b && b == c)
    return true;
  else
    return false;
}

void imprimir_arreglo(int a[], int n)
{
  for(int i=0; i<n; i++)
    cout << a[i] << " ";
}

void imprimir_vector(vector<int> &v)
{
  for(int i=0; i<v.size(); i++)
    cout << v[i] << " ";
}
