#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dem = 0;
		if(n%2!=0)
			cout << dem << endl;
		else{
			while(n!=0){
				if(n%2==0)
					dem++;
				n/=2;
			}
			cout << dem << endl;
		}
	}
	return 0;
}
