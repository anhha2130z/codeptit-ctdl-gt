#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string input; getline(cin, input);
    int a, b, c;
    char plus, equal;
    stringstream ss(input);
    ss >> a >> plus >> b >> equal >> c;
    if (plus == '+' && equal == '=' && (a + b == c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

