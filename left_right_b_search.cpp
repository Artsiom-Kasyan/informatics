#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int f; cin >> f;
    int s; cin >> s;
    int* mass = new int[f];
    int* mass2 = new int[s];
    for(int i = 0; i < f; i++){cin >> mass[i];}
    for(int i = 0; i < s; i++){cin >> mass2[i];}

    for(int i = 0; i < s; i++){
        int x = mass2[i];
        int search = -1;
        int l = 0;
        int r = f - 1;
        int mid;

        while(l <= r){
            mid = l + (r - l) / 2;

            if(mass[mid] == x){
                search = mid;
                r = mid - 1;
            }
            else if(mass[mid] < x) l = mid + 1;
            else r = mid - 1;
        }

        if(search == -1){
            cout << 0 << endl;
            continue;
        }

        int search2 = 0;
        l = 0;
        r = f - 1;

        while(l <= r){
            mid = l + (r - l) / 2;

            if(mass[mid] == x){
                search2 = mid;
                l = mid + 1;
            }
            else if(mass[mid] < x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << search + 1 << " " << search2 + 1 << endl;
    }

    delete[] mass;
    delete[] mass2;

}