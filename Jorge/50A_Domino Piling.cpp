
#include <iostream>
using namespace std;

int main(){

    // en este programa nomas calculas el area del grid que te dieron y luego lo 
    // divides entre 2 porque eso miden los dominos.

    int m, n, area, amount;
    int unit = 2;

    cin >> m >> n;

    area = m*n;

    amount = area/unit;

    cout<<amount;
}