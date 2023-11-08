// Determinar si un número es positivo o no.
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej05par(void)
{
  int x = 0;
  cout << endl << "---Si un número es par---" << endl;
  cout << "Número: ";
  cin >> x;
  if(par(x))
    cout << x << " es par" << endl;
  else
    cout << x << " NO es par" << endl;
}
