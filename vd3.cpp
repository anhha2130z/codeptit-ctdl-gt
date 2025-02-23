#include<bits/stdc++.h>
using namespace std;
int main(){
	long long s = 0;
	int n; cin >> n;
	if (n<0) return 0; 
	for(int i=1;i<=n;i++)
		s += pow(-1,i+1)*i;
	cout<<s<<endl;
	return 0;
}
