#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int c; cin >> c;
    int* mass = new int[c];
    for(int i = 0; i < c; i++){
        cin >> mass[i];
    }
    sort(mass, mass + c);

    cout << mass[c - 1];
    
    delete[] mass;
    return 0;
}