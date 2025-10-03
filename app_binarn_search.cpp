#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < K; i++) {
        long long x;
        cin >> x;
        
        int left = 0, right = N - 1;
        int pos = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] <= x) {
                pos = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        long long candidate1 = arr[pos];
        long long candidate2 = (pos + 1 < N) ? arr[pos + 1] : candidate1;
        
        long long dist1 = abs(candidate1 - x);
        long long dist2 = abs(candidate2 - x);
        
        if (dist1 < dist2) {
            cout << candidate1 << "\n";
        } else if (dist1 > dist2) {
            cout << candidate2 << "\n";
        } else {
            cout << min(candidate1, candidate2) << "\n";
        }
    }
    
    return 0;
}