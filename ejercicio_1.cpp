//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){
    int numero, numeroPositivo, numeroNegativo, numeroCero;

    cout << "Por favor ingrese un numero" << endl;
    cin >> numero;

    if(numero > 1) {
        cout << "El numero es positivo";
    };

    if(numero < 1) {
        cout << "El numero es negativo";
    };

    if(numero == 0) {
        cout << "El numero es igual a 0";
    };



	return 0;
}
