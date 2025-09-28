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
    int result = 0;
    for(int m = 1; m < c; m++){
        if(min - mass[m] < 0) {
            min = mass[m];
            result = m;

        }
    }
    cout << result + 1;
    delete[] mass;
    return 0;
}