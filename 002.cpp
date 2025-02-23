#include <iostream>
using namespace std;
void kq(int n){
	int r, s = n%10; n/= 10;
	while(n!=0){
		r = n%10;
		n/= 10;
	}
	if(r==s)
		cout <<"YES\n";
	else	cout <<"NO\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		kq(n);
	}
	return 0;
}
