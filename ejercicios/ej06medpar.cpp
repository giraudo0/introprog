/* Se entran por teclado 10 números y cuenta de cuantos números son pares.
 * Media de los números pares. */
#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej06medpar(void)
{
  int cont=0; // contador
  float med=0, val=0; // media
  cout << endl << "---Cuenta y media de pares---" << endl;
  
  // Captura:
  cout << "Entre diez valores:" << endl;
  for(int i=0; i<10; i++)
    {
      cin >> val;
      if(par(val)){
	cont++;
	med += val;
      }
    }
  med /= cont;

  // Resultados:
  cout << "Se entraron " << cont << " números pares," << endl;
  cout << "y la media de éstos es " << med << endl;
}
