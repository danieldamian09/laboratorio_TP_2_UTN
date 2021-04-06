//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){
    int numA, numB, numC;

    cout << "Por favor ingrese tres numero :" << endl;
    cin >> numA;
    cin >> numB;
    cin >> numC;

    if(numA != numB && numA != numC && numB != numC) {
        cout << "Todos los numeros son diferentes" << endl;
    };

	return 0;
}
