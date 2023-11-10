/* Concentra todos los ejercicios */

#include "cabeceras/funciones.h"
#include "cabeceras/ejercicios.h"

int main(void){
  cout << "Elija un número de ejercicio:" << endl;
  cout << " 0) ej00suma" << endl;
  cout << " 1) ej01resta" << endl;
  cout << " 2) ej02operaciones" << endl;
  cout << " 3) ej03posit" << endl;
  cout << " 4) ej04medpos" << endl;
  cout << " 5) ej05par" << endl;
  cout << " 6) ej06medpar" << endl;
  cout << " 7) ej07mate1" << endl;
  cout << " 8) ej08mate2" << endl;
  cout << " 9) ej09refvec" << endl;
  cout << "10) ej10estilos" << endl;
  cout << "11) ej11multip" << endl;

  int op = 0;
  cout << "  > "; cin >> op;
  cout << endl;

  switch(op){
    case 0:
      ej00suma();
      break;
    case 1:
      ej01resta();
      break;
    case 2:
      ej02operaciones();
      break;
    case 3:
      ej03posit();
      break;
    case 4:
      ej04medpos();
      break;
    case 5:
      ej05par();
      break;
    case 6:
      ej06medpar();
      break;
    case 7:
      ej07mate1();
      break;
    case 8:
      ej08mate2();
      break;
    case 9:
      ej09refvec();
      break;
    case 10:
      ej10estilos();
      break;
    case 11:
      ej11multip();
      break;
    default:
      cout << "Opción incorrecta" << endl;
  }

  return 0;
}
