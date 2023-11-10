/* Cuadrado de un número, área de un círculo, pares entre 1 y n,
 * múltiplo de 5. */

#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej07mate1(void)
{
  cout << endl << "---Matemáticas 1---" << endl;
  int op = 0, n = 0; // opción, número
  //cout << "Operación:\n1-cuadrado\n2-círculo\n3-pares\n4-cinco\n> ";
  cout << "Operación:" << endl;
  cout << "  1 - Cuadrado de un número" << endl;
  cout << "  2 - Área de un círculo" << endl;
  cout << "  3 - Números pares entre 1 y un número" << endl;
  cout << "  4 - Si un número es múltiplo de 5" << endl;
  cout << "  > ";
  cin >> op;
  cout << "Entre un número: ";
  cin >> n;

  switch(op){
    case 1: // cuadrado
      cout << "El cuadrado de " << n << " es: ";
      cout << cuadrado(n);
      break;
    case 2: // círculo
      cout << "El área del círculo de radio " << n << " es: ";
      cout << circulo(n);
      break;
    case 3: // pares
      pares(n);
      break;
    case 4: // múltiplos de cinco
      if(cinco(n))
	cout << n << " es múltiplo de 5";
      else
	cout << n << " NO es múltiplo de 5";
      break;
    default: // salir
      cout << "Opción no válida" << endl;
  }
  cout << endl;
}
