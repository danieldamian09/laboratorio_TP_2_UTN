//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int diaA, mesA, yearA, diaB, mesB, yearB, diaResultado, mesResultado, yearResultado, edad;

    //---------------Fecha Nacimiento---------------

    cout << "Ingrese el dia de su nacimiento" << endl;
    cin >> diaA;

    cout << "Ingrese el mes de su nacimiento" << endl;
    cin >> mesA;

    cout << "Ingrese el año de su nacimiento" << endl;
    cin >> yearA;

    //---------------Fecha Actual--------------------

    cout << "Ingrese el dia actual" << endl;
    cin >> diaB;

    cout << "Ingrese el mes actual" << endl;
    cin >> mesB;

    cout << "Ingrese el año actual" << endl;
    cin >> yearB;

    diaResultado = diaB - diaA;
    mesResultado = mesB - mesA;
    yearResultado = yearB - yearA;

    /* cout << diaResultado << endl;
    cout << mesResultado << endl;
    cout << yearResultado << endl; */


    if(diaResultado<0 || mesResultado<0){
        yearResultado = yearResultado -1;
    }

    cout << yearResultado;

	return 0;
}
