
#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    int acum = 0;

    cin >> a >> b;

    while( a <= b ){

        a = a * 3;
        b = b * 2;
        acum++;

    }

    cout << acum;

  
    

}