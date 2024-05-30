#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           int n;cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define pi              M_PI 
 
struct Student {
    int roll;
    string name;
    string gender;
};

bool compareByRoll(const Student &a, const Student &b) {
    return a.roll < b.roll;
}

int main() {
    Alauddin
    int t;
    cin >> t;

    for (int c = 1; c <= t; ++c) {
        int n, k; cin >> n >> k;

        map<int, vector<Student>> rooms;

        for (int i = 0; i < k; ++i) {
            int roll, room;
            string name, gender;
            cin >> roll >> name >> room >> gender;

            rooms[room].push_back({roll, name, gender});
        }

        int q; cin >> q;
        cout << "Case #" << c << ": "<<endl;
        for (int qn = 1; qn <= q; ++qn) {
            int qr; cin >> qr;
            cout << "Query #" << qn << ": " <<endl;

            if (rooms.find(qr) != rooms.end() && !rooms[qr].empty()) {
                vector<Student> &students = rooms[qr];
                sort(students.begin(), students.end(), compareByRoll);
                for (const auto &student : students) {
                    cout << student.roll << " " << student.name << " " << student.gender << "\n";
                }
            } else cout << "No Student"<<endl;
        }
    }

    return 0;
}
