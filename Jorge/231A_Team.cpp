
#include <iostream>
using namespace std;

int main(){

    int n;
    int a,b,c;
    int sum = 0;
    int problems_solved = 0;

    cin>>n;

    int solve[n];

    // llenamos el array
    for (int i = 0; i<n; i++){

        cin>> a >> b >> c;
        sum = a+b+c;
        solve[i] = sum;
    }

    // iteramos sobre el array lleno y verificar si sus elemententos son >=2

    for (int i = 0; i<n; i++){
        
        if (solve[i]>=2){

            problems_solved++;
        }
    }

    // se imprime el output que se pide
    cout<<problems_solved;

}