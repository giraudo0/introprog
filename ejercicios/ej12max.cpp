/* Punteros - Ejercicio 4:
 * 1. Definir entre todos la manera de encontrar el máximo elemento de
 * un grupo de números entrados por teclado. Escriba un programa en
 * C++ que permita determinarlo.
 * 2. Definir como encontrar el máximo elemento de un arreglo. Escriba
 * una función que se le pase como parámetro un arreglo y devuelva el
 * máximo elemento. Pruebela usando un arreglo entrado por teclado. */

#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej12max(void)
{
  cout << "---Máximo---" << endl;
  // Captura:
  cout << "Entre números enteros. Entre 't' para terminar:" << endl;
  // Captura del primer elemento:
  int aux = 0;
  cin >> aux;
  // Igualación del máximo al primer elemento (sin usar función, núm 1):
  int max1 = aux;
  // Igualación del máximo al primer elemento (usando la función, núm 2):
  int max2 = aux;
  // Vector:
  vector<int> unvector;
  unvector.push_back(aux); // 'aux' como primer elemento
  for(int e: unvector)
  // Resto de elementos:
  while(true)
  {
    if(cin >> aux)
    {
      // Selección del máximo por elemento (núm 1):
      if(aux > max1)
	max1 = aux;
      // Formación del vector para la función (núm 2):
      unvector.push_back(aux);
    }
    else
    {
      cin.clear(); // quita estado de error de 'cin'
      break;
    }
  }
  // Resultados:
  cout << endl << "El máximo, sin usar función (número 1), es:" << endl;
  cout << max1 << endl;
  cout << "El máximo, usando función (número 2), es:" << endl;
  cout << maximo(unvector, max2) << endl;
}
