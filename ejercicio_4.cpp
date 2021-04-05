//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numeroUno, numeroDos, diferencia;

    cout << "Por favor ingrese el primer numero" << endl;
    cin >> numeroUno;

    cout << "Por favor Ingrese el segundo numero" << endl;
    cin >> numeroDos;

    if (numeroUno > numeroDos){

        diferencia = numeroUno - numeroDos;
        cout << "La diferencia es: " << diferencia << endl;
    }else {

        diferencia = numeroDos - numeroUno;
        cout << "La diferencia es: " << diferencia << endl;

    };


	return 0;
}
