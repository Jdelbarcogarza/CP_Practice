
#include <iostream>
using namespace std;

int main(){

    // creo que se puede eficientar el programa si utilizo solo un while.

    int cell;
    int n = 5;
    int matrix[5][5];
    int posx = 0;
    int posy = 0;
    // el acum mide cuantos movimientos para llegar al centro.
    int acum = 0;
    
    // Se llena la matriz
    for (int i = 0; i<n; i++){

        for (int j = 0; j<n; j++){

            cin >> cell;
            matrix[i][j] = cell;

            if (cell == 1){
                posx = j;
                posy = i;
            }
        }

        cout << "\n";
    }

    if (posx == 2 && posy == 2){
        cout << 0;

    } else{

        while (posx != 2){

            // para x
            if (posx > 2){

                posx--;
            } else if (posx < 2){

                posx++;
            }

            acum++;
        }

        while (posy != 2){
            // para y
            if (posy > 2){

                posy--;
            } else if (posy < 2){

                posy++;
            }

            acum++;
        }

        cout << acum;

    }
    // debe estar en matrix[2][2]. Encontrar cantidad de movimientos para llegar a esa
    // posición.



    /* Así se imprimiría la matriz

    for (int i = 0; i<n; i++){

        for (int j = 0; j<n; j++){

            cout << matrix[i][j] << " ";

        }

        cout << "\n";
    }
    */


}