#include <iostream>
using namespace std;

int main(){

    int w;
    int a;
    int b;

    cin>>w;

    // Por alguna razón el test case 5 con input de 2 no me jalaba bien.
    // el poner esta condición soluciona todo.
    if ( w == 2){

        w++;
    }

    // desomponer en 2 factores enteros los valores que hacen la suma de un número
    // Ej. 6. (6 = 3 + 3 -> NO) pero (6 = 4 + 2 -> YES)

    if( w % 2 == 0){

        a = w/2 + 1;
        b = w/2 - 1;
    }
    
    // checamos que sea un número par y que si de divide entre 2 ese número par este
    // sea igualmente un número par
    if( w % 2 == 0 && w/2 % 2 == 0){

        cout<<"YES";
    
    // El siguiente paso es revisar las distintas combinaciones y ver si son números
    // pares. Ej. 6. (6 = 3 + 3 -> NO) pero (6 = 4 + 2 -> YES)
    }else if(w % 2 == 0 && (a % 2 == 0 && b % 2 == 0) ){

        cout<<"YES";

    }else{

        cout<<"NO";

    }


}