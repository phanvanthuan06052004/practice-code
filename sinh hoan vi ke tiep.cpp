//#include<bits/stdc++.h>
//using namespace std;
//int n, A[1000];
//void sinh(){
//	int i=n-1;
//	while(i>=1 && A[i]>A[i+1]){
//		--i;
//	}
//	if(i==0)
//		for(int i=1; i<=n; i++)
//			A[i]=i;
//	else{
//		int j=n; 
//		while(A[i]>A[j]){
//			--j;
//		}
//		swap(A[i],A[j]);
//		reverse(A+i+1, A+n+1); //A[i+1] ==> A[n]
//	}
//}
//
//
//int main(){
//	int t; cin>>t;
//	while(t--){
//		cin>>n;
//		for(int i=1; i<=n; i++)
//			cin>>A[i];
//		sinh();
//		for(int i=1; i<=n; i++)
//			cout<<A[i]<<" ";
//		cout<<endl;
//	}
//	return 0;
//}




#include<bits/stdc++.h>
using namespace std;
int n, A[1000];



int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++)
			cin>>A[i];
		if(next_permutation(A+1, A+n+1)){
			for(int i=1; i<=n; i++)
				cout<<A[i]<<" ";
		}
		else
			for(int i=1; i<=n; i++)
				cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}

