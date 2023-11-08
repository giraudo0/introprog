/* Resta de dos números reales */
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej01resta(void)
{
  double x=0, y=0;
  cout << endl<< "---Resta---" << endl;
  cout << "x = "; cin >> x;
  cout << "y = "; cin >> y;
  cout << "x - y = " << resta(x, y) << endl;
}
