#include <iostream>
using namespace std;
int ternarySearch(int a[], int left, int right, int target) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (a[mid1] == target)
            return mid1;
        if (a[mid2] == target)
            return mid2;

        if (target < a[mid1])
            return ternarySearch(a, left, mid1 - 1, target);
        else if (target > a[mid2])
            return ternarySearch(a, mid2 + 1, right, target);
        else
            return ternarySearch(a, mid1 + 1, mid2 - 1, target);
    }
    return -1;
}
int main() {
    int n, target; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> target;
    int index = ternarySearch(a, 0, n - 1, target);
    if (index != -1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
