/* Punteros - Ejercicio 3:
 * Haga un programa que lea un arreglo/vector desde teclado y además:
 * 1. Haga una función que se le pase como parámetro un arreglo tipo C,
 * la cantidad de elementos y un valor real y modifique este arreglo
 * multiplicando cada elemento por el valor real.
 * 2. Haga esta misma función pero ahora se le debe pasar como parámetro
 * un vector de c++ y un valor real y modifique este arreglo multiplicando
 * cada elemento por el valor real.
 * 3. Use ambas funciones en un programa. */
 
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej11multip(void)
{
  cout << "---Multiplicar arreglo/vector---" << endl;
  // Arreglo:
  cout << endl << "--Arreglo--" << endl;
  // Tamaño del arreglo:
  int tamagno = 1;
  cout << "Cantidad de elementos del arreglo: ";
  cin >> tamagno;
  // Entrada del arreglo:
  double arreglo[tamagno] = {};
  cout << "Entre números reales:" << endl;
  for(int i=0; i<tamagno; i++)
    cin >> arreglo[i];
  // Copiando arreglo a un vector:
  vector<double> unvector(tamagno);
  cout << endl << "--Vector--" << endl;
  cout << "Copiando elementos del arreglo a un vector..." << endl;
  for(int i=0; i < tamagno; i++)
    unvector[i] = arreglo[i];
  // Factor:
  double factor = 0;
  cout << endl << "Por qué valor real se debe multiplicar:" << endl;
  cin >> factor;
  // Multiplicar arreglo:
  multiplicar_arreglo(arreglo, tamagno, factor);
  cout << endl << "El arreglo ha cambiado a:" << endl;
  for(double e: arreglo)
    cout << e << " ";
  // Multiplicar vector:
  multiplicar_vector(unvector, factor);
  cout << endl << "El vector ha cambiado a:" << endl;
  for(double e: unvector)
    cout << e << " ";
  cout << endl;
}
