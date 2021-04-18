//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int consumo, montoA = 0, montoB = 0, montoC = 0;
    int costoA = 15, costoB= 12, costoC = 10;

    cout << "Por favor ingrese la cantidad de Kilovatios consumidos por el cliente: " << endl;
    cin >> consumo;

    if(consumo <= 100){
        montoC = consumo * costoC;
        cout << "El total a pagar es: " << montoC << endl;
    }else{
        if(consumo > 100 && consumo <= 200){
        montoB = (consumo - 100) * costoB;
        montoC = (100 * costoC) + montoB;
        cout << "El total a pagar es: " << montoC << endl;
        }else{
        montoA = (consumo - 200) * costoA;
        montoC = (100 * costoC) + (100 * costoB) + montoA;
        cout << "El total a pagar es: " << montoC << endl;
        };

    };


	return 0;
}
