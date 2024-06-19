#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    int amazing_count = 0;
    int highest = points[0];
    int lowest = points[0];
    
    for (int i = 1; i < n; ++i) {
        if (points[i] > highest) {
            ++amazing_count;
            highest = points[i];
        } else if (points[i] < lowest) {
            ++amazing_count;
            lowest = points[i];
        }
    }
    
    cout << amazing_count << endl;
    
    return 0;
}