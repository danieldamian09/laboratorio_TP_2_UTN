//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Por favor ingrese tres numero" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a>b && a>c){
        cout << "El mayor es: " << a << endl;
    }else{
        if(b>a && b>c){
            cout << "El mayor es: " << b << endl;
        }else{
            cout << "el mayor es: " << c << endl;
        }
    }



	return 0;
}
