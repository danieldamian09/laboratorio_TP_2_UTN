//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int nota, contadorSiete =0, contadorCuatro=0;

    for (int i=0;i<4;i++){

        cout << "Ingrese las notas" << endl;
        cin >> nota;

        if(nota >= 7){
        contadorSiete = contadorSiete +1;
        }else{
        if(nota >= 4 && nota < 7)
        contadorCuatro = contadorCuatro +1;
        };
    };

//    cout << contadorSiete << endl;
//    cout << contadorCuatro << endl;

    if(contadorSiete == 4){
        cout << "Promociona" << endl;
    }else{
        if(contadorCuatro == 3 || contadorSiete ==3){
            cout << "Rinde examen Final" << endl;
        }else{
            if(contadorCuatro >= 1 || contadorCuatro >=2){
                cout << "Recupera parciales" << endl;
            }else{
                cout << "Recursa la materia" << endl;
            };
        };
    };

	return 0;
}
