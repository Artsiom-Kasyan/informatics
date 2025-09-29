#include <iostream>
#include <set>

using namespace std;

int main(){
    short a; cin >> a;
    set<int> numbers;

    for(int i = 0; i < a; i++){
        int b; cin >> b;

        numbers.insert(b);
    }

    int m = 0;
    for(int n: numbers){
        if(n > m){
            m = n;
        }
    }
    numbers.erase(m);
    int result = 0;
    for(int n: numbers){
        if(n > result){
            result = n;
        }
    }
    cout << result;
}