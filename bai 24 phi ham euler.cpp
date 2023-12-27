#include<bits/stdc++.h>
using namespace std;
// phi ham euler

long long phi(long long n){
	long long res=n;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			res=res-res/i;
		while(n%i==0)
			n/=i;
	}
	if(n>1)
		res-=res/n;
	return res;
}



int main(){
	int t=1;
	while(t--){
		long long n; cin>>n;
		cout<<phi(n)<<endl;
	}
	return 0;
}
