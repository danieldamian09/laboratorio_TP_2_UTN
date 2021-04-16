//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numA, numB, numC;

    cout << "Por favor ingrese tres numeros:" << endl;
    cin >> numA;
    cin >> numB;
    cin >> numC;

    if(numA<numB && numA<numC && numB<numC){
       cout << numB << endl;
       }

    if(numA<numC && numA<numB && numC<numB){
       cout << numC << endl;
       }

    if(numB<numA && numB<numC && numA<numC){
       cout << numA << endl;
       }

    if(numB<numC && numB<numA && numC<numA){
       cout << numC << endl;
       }

    if(numC<numA && numC<numB && numA<numB){
       cout << numA << endl;
       }

    if(numC<numB && numC<numA && numB<numA){
       cout << numB << endl;
       }

	return 0;
}
