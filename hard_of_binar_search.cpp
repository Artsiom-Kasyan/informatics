#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    int k = ceil(log2(N));
    cout << k << endl;
    
    return 0;
}