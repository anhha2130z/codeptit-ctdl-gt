#include <iostream>
#include <cmath>
using namespace std;
int jumpSearch(int a[], int n, int target) {
    int step = sqrt(n);
    int prev = 0;
    while (a[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    for (int i = prev; i < min(step, n); i++) {
        if (a[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int n, target; cin >> n;
    int a[n]; 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> target;
    int index = jumpSearch(a, n, target);
    if (index != -1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

