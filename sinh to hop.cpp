#include<bits/stdc++.h>
using namespace std;
int n,X[100],ok,k;

void kTao(){
	for(int i=1; i<=k; i++){
		X[i]=i; //123....k
	}
}

void sinh(){
	// bat dau tu bit thu k, kiem tra xem phan tu X[i] dat gia tri max hay chua
	//X[i]=N-k+i?
	//X[i] == N-k+i --> khong the tang X[i] len duoc nua, dich sang trai
	//X[i] != N-k+i -->X[i]++, tat ca cac phan tu tu i+1 =>k, se tang dan tu X[i] mot don vi
	int i=k;
	while(i>=1 && X[i]== n-k+i){
		--i;
	}
	//truong hop 1: i van nam trong doan [1,k]
	//truong hop 2: i=0
	if(i==0){
		ok=false; //day la cau hinh cuoi
	} 
	else{
		X[i]++;
		for(int j=i+1; j<=k; j++){
			X[j]=X[j-1]+1;   //phan tu ben phai = ben trai tang 1
		}
	}
}
int main(){
	cin>>n>>k;
	kTao();
	int dem=0;
	ok=true;
	while(ok){
		for(int i=1; i<=k; i++){
			cout<<X[i]<<" ";
		}
		cout<<endl;
		sinh();
		dem++;
	}
	cout<<dem;
	return 0;
}
