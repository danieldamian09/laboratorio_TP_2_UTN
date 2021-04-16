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
       cout << numA << endl;
       cout << numB << endl;
       cout << numC << endl;
       }

    if(numA<numC && numA<numB && numC<numB){
       cout << numA << endl;
       cout << numC << endl;
       cout << numB << endl;
       }

    if(numB<numA && numB<numC && numA<numC){
       cout << numB << endl;
       cout << numA << endl;
       cout << numC << endl;
       }

    if(numB<numC && numB<numA && numC<numA){
       cout << numB << endl;
       cout << numC << endl;
       cout << numA << endl;
       }

    if(numC<numA && numC<numB && numA<numB){
       cout << numC << endl;
       cout << numA << endl;
       cout << numB << endl;
       }

    if(numC<numB && numC<numA && numB<numA){
       cout << numC << endl;
       cout << numB << endl;
       cout << numA << endl;
       }


	return 0;
}
