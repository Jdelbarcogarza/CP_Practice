
#include <iostream>
using namespace std;

int main(){

    int n;
    int v = 0;
    string operation = "";


    cin>>n;

    for (int i = 0; i<n; i++){

        cin>>operation;

        if (operation == "X++" || operation == "++X"){

            v++;

        }else if(operation == "X--" || operation == "--X"){

            v--;
        }
    }

    cout<<v;

}