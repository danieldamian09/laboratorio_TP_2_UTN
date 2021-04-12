//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int a, b, c, d, e, contador;
    contador = 0;

    cout << "Por favor ingrese 5 numeros" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    if(a>0){
        contador = contador + 1;
    };

    if(b>0){
        contador = contador + 1;
    };

    if(c>0){
        contador = contador + 1;
    };

    if(d>0){
        contador = contador + 1;
    };

    if(e>0){
        contador = contador + 1;
    };

    cout << "La cantidad de numeros positivos son: " << contador << endl;


	return 0;
}
