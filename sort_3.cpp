#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int c; cin >> c;
    int* mass = new int[c];
    for(int i = 0; i < c; i++){
        cin >> mass[i];
    }
    int num; cin >> num;
    
    for(int m = 0; m < c; m++){
        if(mass[m] == num){
            cout << m + 1 << endl;
        }
    }
    
    delete[] mass;
    return 0;
}