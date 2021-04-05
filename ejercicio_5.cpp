//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    float importe, importeCinco, importeDiez, importeQuince;

    cout << "Por favor ingrese el importe de la venta para aplicar el respectivo descuento" << endl;
    cin >> importe;

    if(importe < 100) {
        importeCinco = importe * 0.95;
        cout << "El monto total a pagar ya con el descuento del 5% es de: " << importeCinco << endl;
    };

    if(importe >= 100 && importe < 500) {
        importeDiez = importe * 0.90;
        cout << "El monto total a pagar ya con el descuento del 10% es de: " << importeDiez << endl;
    };

    if(importe >= 500) {
        importeQuince = importe * 0.85;
        cout << "El monto total a pagar ya con el descuento del 15% es de: " << importeQuince << endl;
    };


	return 0;
}
