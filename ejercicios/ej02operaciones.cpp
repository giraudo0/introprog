/* Multiplicación y división de dos números reales */

#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej02operaciones(void)
{
  double x=0, y=0;
  cout << endl << "---Operaciones---" << endl;
  cout << "x = "; cin >> x;
  cout << "y = "; cin >> y;
  cout << "x + y = " << suma(x, y) << endl;
  cout << "x - y = " << resta(x, y) << endl;
  cout << "x · y = " << multiplicacion(x, y) << endl;
  cout << "x ÷ y = " << division(x, y) << endl;
}
