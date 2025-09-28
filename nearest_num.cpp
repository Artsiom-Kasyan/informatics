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
    
    sort(mass, mass + c);
    
    int closest = mass[0];
    int min_diff = abs(mass[0] - num);
    
    for(int m = 1; m < c; m++){
        int current_diff = abs(mass[m] - num);
        
        if(current_diff < min_diff){
            min_diff = current_diff;
            closest = mass[m];
        }
    }
    
    cout << closest;
    delete[] mass;
    return 0;
}