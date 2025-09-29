#include <iostream>

using namespace std;

int main(){
    short c; cin >> c;
    int* mass = new int[c];
    for(int i = 0; i < c; i++){
        cin >> mass[i];
    }
    int m = 0;
    for(int i = 0; i < c; i++){
        if(mass[i] > m){
            m = mass[i];
        }
    }
    int n = m;

    for(int i = 0; i < c; i++){
        if(mass[i] < n){
            n = mass[i];
        }
    }
    for(int k = 0; k < c; k++){
        if(mass[k] == m){
            mass[k] = n;
        }
        cout << mass[k] << " ";
    }


}