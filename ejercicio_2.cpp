//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numeroUno, numeroDos, multiplo;

    cout << "Por favor ingrese el primer numero" << endl;
    cin >> numeroUno;

    cout << "Por favor ingrese el segundo numero" << endl;
    cin >> numeroDos;

    multiplo = numeroUno % numeroDos;

    if(multiplo == 0) {
        cout << "El numero: " << numeroUno << " es multiplo de: " << numeroDos << endl;
    }else {
        cout << "El numero: " << numeroDos << " no es multiplo del numero: " << numeroUno;
    }


	return 0;
}
