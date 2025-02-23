#include <iostream>
#include <map>
using namespace std;
void giai(int test, int n) {
    map<int, int> factors;
    for (int i = 2; i * i <= n; i++)
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    if (n > 1)
        factors[n]++;
    cout << "Test " << test << ": ";
    bool first = true;
    for (map<int, int>::iterator it = factors.begin(); it != factors.end(); ++it) {
        if (!first) cout << " ";
        cout << it->first << "(" << it->second << ")";
        first = false;
    }
    cout << endl;
}
int main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> n;
        giai(i, n);
    }
    return 0;
}
