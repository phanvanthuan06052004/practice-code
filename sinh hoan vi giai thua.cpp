#include<bits/stdc++.h>
using namespace std;

int n, A[100], ok;
 
 
void ktao(){
	for(int i=1; i<=n; i++){
		A[i]=i;
	}
}
void sinh(){
	//bat dau tu vi tri n-1; i=n-1
	//chung nao a[i]>a[i+1] thi phai dich sang ben trai
	int i=n-1;
	while(i>=1 && A[i]>A[i+1]){
		--i;
	}
	if(i==0){
		ok=false;
	}
	else{
		//A[i]<A[i+1]
		//do tim so dung sau vi tri i, > a[i] va nho nhat co the
		int j=n; // bat dau tu chi so cuoi cung, bo qua cac vi tri ma A[j]<A[i]
		while(A[i]>A[j]){
			--j;//dich trai
		}//A[j]: phan tu lon hon A[i] ma nho nhat
		swap(A[i], A[j]);//hoan vi
		///sap xep cac phan tu tu i+1==>n theo thu tu tang dan
		//sort(A+i+1,A+n+1);
		//lat nguoc toan tu i+1=>n
		reverse(A+i+1, A+n+1);
		
	}
	
}
//permutation
//next_permutation(): sinh ra hoan vi ke tiep
//prev_permutation(): sinh ra hoan vi ke truoc

//[x,y] => sort(a+x, a+y+1
//reverse(a+x,a+y+1)
//next_permutation(a+x, a+i+1)


//
//*sinh hoan vi ke tiep
//int main(){
//	int A[5]={1,2,3,4,5};
//	next_permutation(X,X+1);
//	// 1 2 3 5 4 
//	for(int i=0; i<=5; i++){
//		cout<<A[i]<<" ";
//	}
//	next_permutation(X,X+1);
//	// 1 2 4 3 5 
//	for(int i=0; i<=5; i++){
//		cout<<A[i]<<" ";
//	}
//}


//**sinh hoan vi ke truoc
//int main(){
//	int A[5]={1,2,3,5,4};
//	prev_permutation(X,X+1);
//	// 1 2 3 4 5
//	for(int x : X){
//		cout<<x<<" ";
//	}
//}


int main(){
	cin>>n;
	ktao();
	
//	do{
//		//in ra cau hinh hien tai
//		for(int i=1; i<=n; i++){
//			cout<<A[i]<<" ";
//		}
//		cout<<endl;
//	}while(next_permutation(A+1;A+n+1));
	ok=true;
	while(ok){
		for(int i=1; i<=n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}
