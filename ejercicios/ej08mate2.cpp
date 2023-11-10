/* Múltiplos de 5 entre 1 y n.
 * Múltiplos de 5 entre n1 y n2.
 * Elementos en un vector múltiplos de 5.
 * Perímetro de un rectángulo.
 * Si triángulo es equilátero. */

#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej08mate2(void)
{
  cout << endl << "---Matemáticas 2---" << endl;

  // Menú:
  cout << "Operación:" << endl;
  cout << "  1 - Múltiplos de 5 entre 1 y n" << endl;
  cout << "  2 - Múltiplos de 5 entre n1 y n2" << endl;
  cout << "  3 - Elementos en un arreglo múltiplos de 5." << endl;
  cout << "  4 - Perímetro de un rectángulo." << endl;
  cout << "  5 - Si triángulo es equilátero." << endl;
  cout << " > ";
  int op = 0; // opción
  cin >> op;

  // Acciones:
  switch(op)
  {
    // Múltiplos de 5 entre 1 y n:
    case 1:
    {
      int n = 0;
      cout << "n = ";
      cin >> n;
      int cont = 0; // contador
      for(int i=1; i<=n; i++)
      {
	if(cinco(i))
	  cont++;
      }
      cout << "Hay " << cont << " números múltiplos de 5 entre 1 y ";
      cout << n << endl;
      break;
    }

    // Múltiplos de 5 entre n1 y n2:
    case 2:
    {
      int n1 = 0, n2 = 0;
      cout << "n1 = ";
      cin >> n1;
      cout << "n2 = ";
      cin >> n2;
      int cont = 0;
      for(int i=n1; i<=n2; i++)
      {
	if(cinco(i))
	  cont++;
      }
      cout << "Hay " << cont << " múltiplos de 5, entre " << n1;
      cout << " y " << n2 << "."<< endl;
      break;
    }

    // Elementos en un vector múltiplos de 5:
    case 3:
    {
      int a[10] = {3, 5, 7, 9, 10, 12, 17, 20, 21, 30};
      int cont = 0;
      for(int elem: a)
      {
	      if(cinco(elem))
	        cont++;
      }
      cout << "Hay " << cont << " múltiplos de 5 en el arreglo." << endl;
      break;
    }
    
    // Perímetro de un rectángulo:
    case 4:
    {
      double ancho = 0, alto = 0;
      cout << "ancho = ";
      cin >> ancho;
      cout << "alto = ";
      cin >> alto;

      cout << "Perímetro = " << perim_rect(ancho, alto) << endl;
    }
    
    // Si triángulo es equilátero:
    case 5:
    {
      double lado1 = 0, lado2 = 0, lado3 = 0;
      cout << "lado1 = ";
      cin >> lado1;
      cout << "lado2 = ";
      cin >> lado2;
      cout << "lado3 = ";
      cin >> lado3;

      cout << "El triángulo ";
      if(equilatero(lado1, lado2, lado3))
	cout << "SÍ es equilatero" << endl;
      else
	cout << "NO es equilatero" << endl;
    }
  }
}
