#include<bits/stdc++.h>
using namespace std;


long long f[100];
void init(){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92;i++){
		f[i]= f[i-1]+f[i-2];
	}	
}



int main(){
	init();
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		bool ok= false;
		for(int i=1; i<=92; i++){
			if(n== f[i]){
				ok=true;
				break;
			}
		} 
	if(ok)
		cout<<"YES\n";
	else
		cout<<"NO\n";	
	}
	return 0;
}
