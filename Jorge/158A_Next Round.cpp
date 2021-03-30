
#include <iostream>
using namespace std;

int main(){

    int n;
    int k;
    int score;
    int reference;
    int acum = 0;

    cin>> n >> k;

    int scores[n];

    // llenamos el array
    for (int i = 0; i<n; i++){

        cin>> score;
        scores[i] = score;
    }

    reference = scores[k-1];

    for (int i = 0; i<n; i++){

        if (scores[i] >= reference && scores[i]>0 ){

            acum++;
        }
    }

    cout<<acum;

}