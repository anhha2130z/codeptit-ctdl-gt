#include <bits/stdc++.h>
using namespace std;
int n, k, x[100005];
bool OK;
void Init () {
    cin >> n >> k;
    OK=true;
    for (int i=0; i<k; i++)
        x[i]=i+1;
}
void Result () {
    for (int i=0; i<k; i++)
        cout << x[i] << ' ';
    cout << endl;
}
void Next_Combination () {
    int i=k-1;
    while (i>=0 && x[i]==n-(k-1)+i)
        i--;
    if (i>=0) {
        x[i]++;
        for (int j=i+1; j<k; j++) x[j]=x[i]+j-i;
    }
    else
        OK=false;
}
int main () {
    Init();
    while (OK) {
        Result();
        Next_Combination();
    }
    return 0;    
}
