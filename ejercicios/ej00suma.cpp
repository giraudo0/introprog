/* Suma de dos números reales */
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej00suma(void)
{
  double x=0, y=0;
  cout << "---Suma---" << endl;
  cout << "x = "; cin >> x;
  cout << "y = "; cin >> y;
  cout << "x + y = " << suma(x, y) << endl;
}
