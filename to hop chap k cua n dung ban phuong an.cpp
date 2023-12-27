#include<bits/stdc++.h>
#define size 1001
using namespace std;

long long A[size][size];
//A[i][j] to hop chap j cuar i
void init(){			//bang phuong an tim to hop chap k cua n phan tu
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i){
				A[i][j]=1;
			}
			else{
				A[i][j]=A[i-1][j-1]+A[i-1][j];
				A[i][j]%=(int)(1e9 +7); 		// cach viet khac 1000000007
			}			
		}
	}
}

int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<A[n][k]<<endl;
	}
	return 0;	
}
