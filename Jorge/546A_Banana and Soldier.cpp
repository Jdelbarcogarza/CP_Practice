
#include <iostream>
using namespace std;

int main(){

    int k, n, w;
    int acum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i<w+1; i++){

        acum = acum + i;
    }

    int total = k * acum;

    if (n < total){

        cout << total - n;
    } else {

        cout << 0;
    }

}