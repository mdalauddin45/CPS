#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int minCostToPalindrome(string s) {
    int n = s.size();
    vector<int> freq(26, 0); 
    for (char c : s) {
        if (isupper(c))
            freq[toupper(c) - 'A']++;
        else
            freq[c - 'a']++;
    }

    int totalCost = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            if (freq[i] == 1)
                totalCost++; 
            else
                totalCost += min(freq[i], freq[25 - i]); 
        }
    }

    return totalCost;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        cout << minCostToPalindrome(s) << endl;
    }

    return 0;
}
