//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int year, restoA, restoB, restoC;

    cout << "Por favor ingrese un año:" << endl;
    cin >> year;

    restoA = year % 4;
    restoB = year % 100;
    restoC = year % 400;

    cout << restoA << endl;
    cout << restoB << endl;
    cout << restoC << endl;

    if(restoA == 0 && restoB != 0 && restoC !=0){
        cout << "Es biciesto" << endl;
    }else{
        if(restoB == 0 && restoC == 0){
            cout << "Es biciesto" << endl;
        }else{
            cout << "No es biciesto" << endl;
        }
    }


	return 0;
}
