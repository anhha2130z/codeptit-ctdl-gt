#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	//insertion sort
	int pos, x;
	for(int i = 1; i < n; i++){ 
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = x;
	}
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
