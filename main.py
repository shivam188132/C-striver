import pyautogui
import time

# Delay for 5 seconds before starting
time.sleep(30)

# C++ code to be typed
cpp_code = """
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

pair<int, int> findContinuousSubset(int n, vector<int>& ranks) {
    // Initialize variables to track the out-of-order elements
    int startIndex = -1, endIndex = -1;
    
    // Iterate through the ranks to find the out-of-order elements
    for (int i = 0; i < n - 1; ++i) {
        if (ranks[i] > ranks[i + 1]) {
            // Found an out-of-order element
            if (startIndex == -1) {
                // Set the start index of the subset
                startIndex = i;
            }
            // Update the end index of the subset
            endIndex = i + 1;
        }
    }
    
    if (startIndex == -1) {
        // If start index remains -1, the queue is already sorted
        return make_pair(-1, -1);
    } else {
        // Find the correct end index of the subset
        while (endIndex < n - 1 && ranks[endIndex] >= ranks[endIndex + 1]) {
            endIndex++;
        }
        return make_pair(startIndex, endIndex);
    }
}

int main() {
    // Input
    int n;
    cin >> n;
    vector<int> ranks(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranks[i];
    }

    // Find continuous subset
    pair<int, int> result = findContinuousSubset(n, ranks);

    // Output
    if (result.first == -1) {
        cout << -1 << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
"""

# Typing the C++ code
pyautogui.typewrite(cpp_code)
