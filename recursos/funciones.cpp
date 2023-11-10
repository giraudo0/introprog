/* Definición de funciones */

#include "../cabeceras/funciones.h"

// Suma de dos números reales:
double suma(double a, double b)
{
    return a + b;
}

// Resta de dos números reales:
double resta(double a, double b)
{
    return a - b;
}

// Multiplicación de dos números reales:
double multiplicacion(double a, double b)
{
    return a * b;
}

// División de dos números reales:
double division(double a, double b)
{
    return a / b;
}

// Evalúa si un número es positivo o no:
bool positivo(int num)
{
    if(num > 0)
	return true;
    else
	return false;
}

// Evalúa si un número es par o no:
bool par(int num)
{
    if(num % 2 == 0)
	return true;
    else
	return false;
}

// Cuadrado de un número:
int cuadrado(int x){
    return x * x;
}

// Área de un círculo:
double circulo(double x){
    return 3.1416 * x * x;
}

// Números pares entre 1 y n:
void pares(int x){
    cout << "Números pares entre 1 y " << x << ":" << endl;
    for(int i=2; i<x; i+=2){
	cout << i << " ";
    }
}

// Si un numero es múltiplo de 5:
bool cinco(int x){
    if(x%5 == 0)
	return true;
    else
	return false;
}

// Perímetro de un rectángulo:
double perim_rect(double a, double b)
{
  return 2*a + 2*b;
}

// Si un triángulo es equilátero:
bool equilatero(double a, double b, double c)
{
  if(a == b && b == c)
    return true;
  else
    return false;
}

/* Imprimir elementos de un arreglo:
 * Los arreglos siempre se pasan por referencia, por lo que no es
 * necesario usar el operador '&'. El puntero apunta al primer
 * elemento del arreglo. */
void imprimir_arreglo(int a[], int n)
{
  for(int i=0; i<n; i++)
    cout << a[i] << " ";
}

/* Imprimir elementos de un vector:
 * Los vectores se comportan como otras variables, por lo que se les
 * antepone el operador '&'. */
void imprimir_vector(vector<int> &v)
{
  for(int i=0; i<v.size(); i++)
    cout << v[i] << " ";
}

// Media de un arreglo (estilo C):
double notas_media_c(double *a, int cant)
{
  double med = 0; // media
  for(int i=0; i < cant; i++)
    /* Los corchetes siguientes implican que se apunta al
     * elemento 'i' correspondiente del arreglo, por lo que 'a'
     * no va antecedido por un asterisco: */
    med += a[i];
  med /= cant;
  return med;
}

// Media de un vector (etilo C++):
double notas_media_cpp(vector<double> &vec)
{
  double med = 0; // media
  for(int i=0; i < vec.size(); i++)
    med += vec[i];
  med /= vec.size();
  return med;
}

// Multiplicar elementos de un arreglo (estilo C):
void multiplicar_arreglo(double *a, int tam, double fac)
{
  for(int i=0; i < tam; i++)
    a[i] *= fac;
}

// Multiplicar elementos de un vector (etilo C++):
void multiplicar_vector(vector<double> &vec, double fac)
{
  for(int i=0; i < vec.size(); i++)
    vec[i] *= fac;
}

// Obtener el elemento máximo de un vector:
int maximo(vector<int> &vec, int max)
{
  for(int i=0; i < vec.size(); i++)
    if(vec[i] > max)
      max = vec[i];
  return max;
}
