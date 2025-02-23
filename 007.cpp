#include <bits/stdc++.h>
using namespace std;
string chuanHoa(string s) {
    stringstream ss(s);
    string word, result = "";
    while (ss >> word) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        result += word + " ";
    }
    if (!result.empty())
		result.erase(result.length() - 1);
    return result;
}
int main() {
    int N;cin >> N;cin.ignore();
    for (int i = 0; i < N; i++) {
        string s; getline(cin, s);
        cout << chuanHoa(s) << endl;
    }
    return 0;
}
