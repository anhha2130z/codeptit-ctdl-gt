#include <bits/stdc++.h>
using namespace std;
string capitalize(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s[0] = toupper(s[0]);
    return s;
}
string formatName(string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    if (words.size() == 1) {
        return capitalize(words[0]);
    }
    string lastName = words[0];
    transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
    string firstName = "";
    for (int i = 1; i < words.size(); i++) {
        firstName += capitalize(words[i]) + " ";
    }
    if (!firstName.empty())
    	firstName.erase(firstName.length() - 1); 
    return firstName + ", " + lastName;
}
int main() {
    int t; cin >> t; cin.ignore();
    while (t--) {
        string name; getline(cin, name);
        cout << formatName(name) << endl;
    }
    return 0;
}

