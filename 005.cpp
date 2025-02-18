#include<bits/stdc++.h>
using namespace std;
int main(){
	double s = 0;
	int n; cin >> n;
	if (n<=0)
		return 0; 
	for(int i=0;i<=n;i++)
		s += 1.0*(2*i+1)/(2*i+2);
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
