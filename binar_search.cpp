#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int f; cin >> f;
    int s; cin >> s;
    int* mass = new int[f];
    int* mass2 = new int[s];
    for(int i = 0; i < f; i++){
        cin >> mass[i];
    }
    for(int i = 0; i < s; i++){
        cin >> mass2[i];
    }

    sort(mass, mass + f);

    for(int i = 0; i < s; i++){
        bool flag = false;
        int l = 0;
        int r = f - 1;
        int mid;
        while (l <= r){
            mid = l + (r - l) / 2;
            if(mass[mid] == mass2[i]){
                flag = true;
                break;
            }
            else if(mass[mid] > mass2[i]){
                r = mid - 1;  
            }
            else{
                l = mid + 1;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}