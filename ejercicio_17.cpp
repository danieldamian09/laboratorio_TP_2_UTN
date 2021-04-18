//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int a, b, c, d;

    cout << "Por favor ingrese 4 numeros" << endl;
    cin >> a >> b >> c >> d;

    if(a<b && b<c && c<d){
        cout << "Los numeros estan ordenados" << endl;
    }else{
        cout << "Los numeros no estan ordenados" << endl;
    }



	return 0;
}
