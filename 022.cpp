#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	//seclection sort
	for (int  i = 0; i < n - 1; i++){
		int min = i; 
		for(int j = i + 1; j < n; j++)
	   		if (a[j] < a[min])
		       min = j;
		if (min != i)
	   		swap(a[min], a[i]);
	}
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
