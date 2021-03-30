
#include <iostream>
#include <String>
using namespace std;

int main(){

    int n;
    int acum = 0;
    cin>>n;

    string words[n];
    string word = "";

    // llenamos el array con el input del usuario
    for (int i = 0; i<n; i++){

        cin>>word;

        words[i] = word;
    }

    // iteramos sobre el array ya lleno
    for (int i = 0; i<n; i++){

        // si la palabra es mayor a 10 chars entonces se procesa como pide el problema
        if( words[i].length() > 10 ){

            for (int j = 0; j<words[i].length()-2; j++){

                acum++;
            }

            // se imprime el resultado y se resetea el contador de caracteres.
            cout<<words[i][0]<<acum<<words[i].back()<<"\n";
            acum = 0;

        // si el input no cumple con la condición inicial se corre este bloque de código
        } else{

            cout<<words[i]<<"\n";
        }

    }

}