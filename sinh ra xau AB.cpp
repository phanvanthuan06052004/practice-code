#include<bits/stdc++.h>
using namespace std;
int A[100],n,ok;
void ktao()
{
	for(int i=1; i<=n; i++){
		A[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && A[i]==1){
		A[i]=0;
		--i;
	}
	if(i==0)
		ok=false;
	else{
		A[i]=1;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=true;
		while(ok){
			for(int i=1; i<=n; i++)
				if(A[i]==0)
					cout<<"A";
				else
					cout<<"B";
			cout<<" ";
			sinh();		
			}
		cout<<endl;
		}
}
