#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int c; cin >> c;
    int* mass = new int[c];

    for(int i = 0; i < c; i++){
        cin >> mass[i];
    }

    int min = mass[0];
    int min2 = 10000000;

    for(int m = 1; m < c; m++){
        if(min - mass[m] > 0) {
            min = mass[m];
        }
    }

    for(int j = 0; j < c; j++){
        if(mass[j] > min && mass[j] < min2){
            min2 = mass[j];
        }
    }
    if(min2 == 10000000){
        min2 = min;
    }

    cout << min << " " << min2;
    delete[] mass;
    return 0;
}