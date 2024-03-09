#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int M, x, y;
        cin >> M >> x >> y;
        
        vector<int> cops(M);
        for (int i = 0; i < M; ++i) {
            cin >> cops[i];
        }
        
        sort(cops.begin(), cops.end());
        
        int safeHouses = 0;
        int coverage = x * y;
        for (int i = 1; i <= 100; ++i) {
            bool safe = true;
            for (int j = 0; j < M; ++j) {
                if (abs(i - cops[j]) <= coverage) {
                    safe = false;
                    break;
                }
            }
            if (safe) {
                ++safeHouses;
            }
        }
        
        cout << safeHouses << endl;
    }
    
    return 0;
}