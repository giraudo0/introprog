/* Punteros - Ejercicio 2:
 * Haga una función que imprima los elementos de un arreglo pasado como
 * parámetro cumpliendo con los siguientes requerimientos.
 * 1. Use un arreglo tipo C. Sugerencia: pase además la cantidad de elementos del arreglo.
 * 2. Use un vector de la std.
 * El arreglo y vector deben ser leídos desde teclado. */
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej10estilos(void)
{
  cout << "---Nota de 10 estudiantes---" << endl;
  // Captura:
  // Crea vector de 10 elementos, y los inicializa todos a cero:
  const int cantidad = 10;
  double notas[cantidad];
  cout << "Entre la nota de cada estudiante:" << endl;
  for(int i=0; i < cantidad; i++)
    cin >> notas[i];

  // Estilo C:
  cout << endl;
  cout << "Estilo C" << endl;
  cout << notas_media_c(notas, cantidad) << endl;

  // Estilo C++:
  cout << endl;
  cout << "Estilo C++" << endl;
  /* Para evitar entrar de nuevo las notas por teclado
   * se duplica el arreglo 'notas' en el vector 'calif': */
  vector<double> calif(cantidad);
  for(int i=0; i < cantidad; i++)
    calif[i] = notas[i];
  cout << notas_media_cpp(calif) << endl;
}
