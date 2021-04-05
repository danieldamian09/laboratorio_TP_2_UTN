//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numero, numeroPar;

    cout << "Por favor ingrese un numero" << endl;
    cin >> numero;

    numeroPar = numero % 2;

    if(numeroPar == 0) {
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero es inpar" << endl;
    }


	return 0;
}
