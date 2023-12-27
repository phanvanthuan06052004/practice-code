#include<bits/stdc++.h>
using namespace std;
//sinh nhi phan
//<xay dung cau hinh dau tien>

//while(<chua phai cau hinh vcuoi cung>){
//	<in ra cau hinh hien tai>
//	<sinh ra cau hinh tiep theo>


int n,X[100],ok;
void ktao(){
	//cau hinh dau tien la cac bit 0
	for(int i=0; i<=n; i++){
		X[i]=0;
	}
}

void sinh(){
	//bat dau tu bit cuoi cung torng cau hinh
	//di tim bit dau tien =0 tinh tu ben phai
	int i=n;
	while(i>=1 && X[i]==1){
		X[i]=0;
		--i;// dich sang bit ben trai
	}
	if(i==0) ok=false;
	else{
		X[i]=1;
	}
}

int main(){
	cin>>n;
	ok=true;
	ktao();
	while(ok){
		for(int i=1; i<=n; i++){
			cout<<X[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}
