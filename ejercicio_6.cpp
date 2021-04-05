//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numA, numB, numC;

    cout << "Por favor ingrese el primer numero" << endl;
    cin >> numA;

    cout << "Por favor ingrese el primer numero" << endl;
    cin >> numB;

    cout << "Por favor ingrese el primer numero" << endl;
    cin >> numC;

    if(numA == numB && numB == numC) {
        cout << "Los numeros son iguales";
    }else{
        cout << "Los numeros no son iguales";
    };



	return 0;
}
