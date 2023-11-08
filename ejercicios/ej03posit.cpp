// Determinar si un número es positivo o no.
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej03posit(void)
{
  int x = 0;
  cout << endl << "---Si un número es positivo---" << endl;
  cout << "Número: ";
  cin >> x;
  if(positivo(x))
    cout << x << " es positivo" << endl;
  else
    cout << x << " NO es positivo" << endl;
}
