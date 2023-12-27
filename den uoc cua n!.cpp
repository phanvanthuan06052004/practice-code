#include<bits/stdc++.h>
using namespace std;
//dem uoc cua n!

bool nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			return false;
	}
	return n>1;
}

long long degree(int n, int p){
	int ans=0;
	for(int i=p; i<=n; i*=p){
		ans+= n / i;
	}
	return ans;
}



int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long ans=1;
		for(int i=1; i<=n; i++){
			if(nt(i)){
				int d=degree(n,i);
				ans*=(d+1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
