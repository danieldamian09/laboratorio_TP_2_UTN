//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int ladoA, ladoB, ladoC;

    cout << "Por favor ingrese la longitud de los tres lados del triangulo:" << endl;
    cin >> ladoA;
    cin >> ladoB;
    cin >> ladoC;

    if(ladoA == ladoB && ladoB == ladoC) {
        cout << "El triangulo es Equilatero" << endl;
    }else{
        if(ladoA == ladoB || ladoB == ladoC) {
            cout << "El triangulo es Isosceles" << endl;
        }else{
            cout << "El triangulo es Escaleno" << endl;
        };
    };


	return 0;
}
