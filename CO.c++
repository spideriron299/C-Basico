//Calculadora con opcion multiple
#include <iostream>

using namespace std;

int main(){
    int opcion = 0;
    int a, b, x =0;
    cout << "Ingresa el valor de A: " << endl;
    cin >> a;
    cout << "Ingresa el valor de B: " << endl;
    cin >> b;
    
    while (x < 1)
    {
    cout << "\033[2J\033[1;1H";
    cout <<"1. Resta\n2. Suma\n3. Multiplicacion\n4. Division\n";
    cin >> opcion;
       switch (opcion)
       {
       case 1:
        cout<< "El resultado es:" <<a-b << endl;
        break;

       case 2:
        cout<< "El resultado es:"  << a+b;
        break;
        
      case 3:
       cout<< "El resultado es:"  << a*b;
       break;
       
      case 4:
       cout << "El resultado es:"  << a/b;
       break;

      default:
        cout << "Opcion invalida";
        break;
       }
       cout <<"Deseas hacer otra opereacion?\n";
       cout <<"0 Si\n1 No\n";
       cin >> x;       
    }
    
}