/* Se entran por teclado 10 números y cuenta de cuantos números son positivos.
 * Media de los números positivos. */

#include "../cabeceras/funciones.h"
#include "../cabeceras/ejercicios.h"

void ej04medpos(void)
{
  int cont=0; // contador
  float med=0, val=0; // media y valor
  cout << endl << "---Cuenta y media de positivos---" << endl;
  
  // Captura:
  cout << "Entre diez valores:" << endl;
  for(int i=0; i<10; i++)
    {
      cin >> val;
      if(positivo(val)){
	cont++;
	med += val;
      }
    }
  med /= cont;

  // Resultados:
  cout << "Se entraron " << cont << " números positivos," << endl;
  cout << "y la media de éstos es " << med << endl;
}
