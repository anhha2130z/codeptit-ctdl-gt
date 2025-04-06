#include <bits/stdc++.h>
using namespace std;
int n, x[100005];
bool OK;
void Init() {
    cin >> n;
    OK = true;
    for (int i = 0; i < n; i++)
        x[i] = i + 1;
}
void Result() {
    for (int i = 0; i < n; i++)
        cout << x[i] << ' ';
    cout << endl;
}
void Next_Permutation() {
    int i=n-2;
    while (i>=0 && x[i]>x[i+1])
        i--;
    if (i<0) {
        OK=false;
        return;
    }
    sort(x+i+1, x+n);
    for (int j=i+1; j<n; j++)
        if (x[i]<x[j]) {
                int d=x[i];
            x[i]=x[j];
            x[j]=d;
            break;
        }
    sort(x+i+1, x+n);
}
int main() {
    Init();
    while (OK) {
        Result();
        Next_Permutation();
    }
    return 0;
}
