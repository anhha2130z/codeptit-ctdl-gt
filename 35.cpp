#include <iostream>
using namespace std;
int binarySearch(int a[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int exponentialSearch(int a[], int n, int target) {
    if (a[0] == target)
        return 0;
    int i = 1;
    while (i < n && a[i] <= target)
        i *= 2;
    return binarySearch(a, i / 2, min(i, n - 1), target);
}
int main() {
    int n, target; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> target;
    int index = exponentialSearch(a, n, target);
    if (index != -1)
        cout << "YES\n"
    else
        cout << "NO\n"

    delete[] a;
    return 0;
}
