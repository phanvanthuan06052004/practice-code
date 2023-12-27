#include<bits/stdc++.h>
using namespace std;
// phi ham euler 2 co nhieu test key

int phi[1000001];
void sang(){
	for(int i=1; i<=1000000; i++){
		phi[i]=i;
	}
	for(int i=2; i<=1000000; i++){
		if(phi[i]==i){		//i la so nguyen to
			phi[i]=i-1;
		}
		for(int j=2*i; j<=1000000; j+=i){
			phi[j]=phi[j]-phi[j]/i;
		}
	}
}



int main(){
	sang();
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		for(int i=1; i<=n; i++){
			cout<<phi[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
