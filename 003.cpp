#include<iostream>
using namespace std;
void doixung(int a[], int n){
	int d = 1;
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			d = 0;
			cout <<"NO\n";
		}
	}
	if(d!=0) cout << "YES\n";
}
int main(){
	int t;cin >> t;
	while(t--){
		int n, a[105]; cin >>n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		doixung(a, n);
	}
	return 0;
}
