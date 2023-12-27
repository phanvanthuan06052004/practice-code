#include<bits/stdc++.h>
using namespace std;


bool NT(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			return false;
	}
	return n>1;
}
long long hoanhao[100];
int cnt=0; // dem so luong hoan hao


void init(){
	for(int p=2; p<=32; p++){     //neu lon hon 32 se trang lon long
		if(NT(p)){
			int tmp=(int)pow(2,p)-1;
			if(NT(tmp)){
				hoanhao[cnt]=1*(int)pow(2,p-1)*tmp;
				cnt++;
			}
		}
	}
}
int main(){
	init();
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		bool ok= false;
		for(int i=0; i<cnt; i++){
			if(n== hoanhao[i]){
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
