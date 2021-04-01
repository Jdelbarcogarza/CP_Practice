
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string s = "";

    cin >> s;

    if (islower(s[0])){

        s[0] = toupper(s[0]);

        for (int i = 0; i<s.length(); i++){

            cout << s[i];
        }

    } else {

        cout << s;

    }


}