#include <bits/stdc++.h>
using namespace std;
int count(string s) {
    map<char, vector <int> > pos;
    for (int i = 0; i < 52; i++)
        pos[s[i]].push_back(i);
    int dem = 0;
    vector<char> keys;
    for (map<char, vector <int> >::iterator it = pos.begin(); it != pos.end(); ++it)
        keys.push_back(it->first);
    int size = keys.size();
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            char a = keys[i], b = keys[j];
            int a1 = pos[a][0], a2 = pos[a][1];
            int b1 = pos[b][0], b2 = pos[b][1];
            if ((a1 < b1 && b1 < a2 && a2 < b2) || (b1 < a1 && a1 < b2 && b2 < a2)) {
                dem++;
            }
        }
    }
    return dem;
}
int main() {
    string s; cin >> s;
    cout << count(s) << endl;
    return 0;
}
