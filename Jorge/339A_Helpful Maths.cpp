
#include <iostream>
using namespace std;
// checa el knuth morris algorithm
// no se porque me pone un '+' extra cuando uso esta función.
// sin duda se puede optimizar este programita.
void checkAdd(int add){

    if (add > 0){
            cout << "+";
            add--;
        }
}

int main(){

    // counters de cantidad de cada número 1, 2 y 3.

    int one = 0;
    int two = 0;
    int three = 0;
    int add = 0;

    string s = "";

    cin >> s;

    for (int i = 0; i<s.length(); i++){

        if (s[i] == '1'){

            one++;
        } else if (s[i] == '2'){

            two++;
        } else if (s[i] == '3'){

            three++;
        } else {

            add++;
        }
    }

    for (int i = 0; i<one; i++){

        cout << "1";

        if (add > 0){
            cout << "+";
            add--;
        }

    }

    for (int i = 0; i<two; i++){

        cout << "2";

        if (add > 0){
            cout << "+";
            add--;
        }
    }

    for (int i = 0; i<three; i++){

        cout << "3";

        if (add > 0){
            cout << "+";
            add--;
        }
    }
    
}