// problem: 2072A
// title: New World, New Me, New Array

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        // Check if k is within the possible range
        if (k < -n * p || k > n * p) {
            cout << -1 << endl;
            continue;
        }
        
        // If k is already 0, no operations are needed
        if (k == 0) {
            cout << 0 << endl;
            continue;
        }
        
        // Calculate the minimum number of operations
        int min_ops = abs(k) / p;
        if (abs(k) % p != 0) {
            min_ops++;
        }
        
        cout << min_ops << endl;
    }
    
    return 0;
}