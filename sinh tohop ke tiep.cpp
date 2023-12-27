#include<bits/stdc++.h>
using namespace std;
int A[1005],n,k;

void sinh(){
	int i=k;
	while(i>=1 && A[i]==n-k+i){
		--i;
	}
	if(i==0)
		for(int i=1; i<=k; i++)
			A[i]=i;
	else{
		A[i]++;
		for(int j=i+1; j<=k; j++){
			A[j]=A[j-1]+1;
		}
	}
}

int main(){
	int t; 
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++)
			cin>>A[i];
		sinh();
		for(int i=1; i<=k; i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
}
