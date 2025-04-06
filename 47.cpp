#include <bits/stdc++.h>
using namespace std;
int n, x[100005];
bool OK;
void Init () {
    cin >> n;
    for (int i=0; i<n; i++)
        x[i]=0;
}
void Result () {
    for (int i=0; i<n; i++)
        cout << x[i] << ' ';
    cout << endl;
}
void Next_Bits_String () {
    int i=n-1;
    while (i>=0 && x[i]) {
        x[i]=0;
        i--;
    }
    if (i>=0) x[i]=1;
    else OK=false;
}
int main () {
    Init(); OK=true;
    while (OK) {
        Result();
        Next_Bits_String();
    }
    return 0;    
}
