//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int a, b, c, d, e, mayor;

    cout << "Por favor ingrese 5 numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    if(a>b){
        mayor = a;
        cout << "El mayor es: " << mayor << endl;
    }else{
        mayor = b;
    }

    if(c>mayor){
        mayor = c;
    }

    if(d>mayor){
        mayor = d;
    }

    if(e>mayor){
        mayor = e;
    }

    cout << "El mayor es: " << mayor << endl;

	return 0;
}
