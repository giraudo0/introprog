/* Punteros - Ejercicio 1:
 * Haga una función que imprima los elementos de un arreglo pasado como
 * parámetro cumpliendo con los siguientes requerimientos.
 * 1. Use un arreglo tipo C. Sugerencia: pase además la cantidad de elementos del arreglo.
 * 2. Use un vector de la std.
 * El arreglo y vector deben ser leídos desde teclado. */
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej09refvec(void)
{
  cout << "---Paso por referencia---" << endl;
  // ARREGLO
  cout << "--Arreglo--" << endl;
  // Tamaño del arreglo:
  int tamagno = 1;
  cout << "Cantidad de elementos del arreglo: ";
  cin >> tamagno;
  // Entrada del arreglo:
  int arreglo[tamagno] = {};
  cout << "Entre números enteros:" << endl;
  for(int i=0; i<tamagno; i++)
    cin >> arreglo[i];
  // Imprimir arreglo:
  cout << "Los números entrados son: " << endl;
  imprimir_arreglo(arreglo, tamagno);

  // VECTOR
  cout << endl << endl << "--Vector--";
  // Entrada del vector:
  vector<int> vec;
  int aux = 0; // variable auxiliar para captura
  cout << endl;
  cout << "Entre números enteros. Entre 't' para terminar:" << endl;
  while(true)
  {
    if(cin >> aux)
      vec.push_back(aux);
    else
    {
      cin.clear(); // quita estado de error de 'cin'
      break;
    }
  }
  // Imprimir vector:
  cout << "Los números entrados son: " << endl;
  imprimir_vector(vec);
  cout << endl;
}
