#include<bits/stdc++.h>
using namespace std;

//****>>>>li thuyet
//bool islower(char c) : kiem tra in thuong
//bool isupper(char c) : kiem tra in hoa
//bool isalpha(char c) : kiem tra chu cai
//bool isdigit(char c) : kiem tra ki tu so
//int tolower(char c): tra ve ma ascii cua ki tu o dang in thuong cua no
//int toupper(char c): tra ve ma ascii cua ki tu o dang inhoa cua no

//*****nhap vao 1 xau ki tu chi bao gom cac chu cai
//tim ki tu co so lan xuat hien nhieu nhat trong xau
//tronG TH co nhieu ki tu co cung so lan xuat hien thi lay ki tu 
//co thu tu tu dien nho nhat
//vd 
//abcdabcdac
//output
//a 3
//int main(){
//	string S;
//	getline(cin,S);
//	int A[256]={0};
//	for(int i=0; i<S.size(); i++)
//		A[S[i]]++;
//	int res=0; char ans;
//	for(int i=0; i<256; i++){
//		if(A[i]>res){
//			res=A[i];
//			ans=(char)(i);
//		}
//	}
//	cout<<ans<<" "<<res;
//}


//*****tinh tong so lon
//vd 12490832573245345034583405834958375983578934
//int main(){
//	string S;
//	getline(cin,S);
//	int sum=0;
//	for(int i=0; i<S.size(); i++)
//		sum+=S[i]-'0';
//	cout<<sum;
//	return 0;
//}


//****vd for each: in ra tung ky tu
int main(){
//	string S;
//	getline(cin,S);
//	for(auto X : S){
//		cout<<X<<endl;
//	}	
	int A[7]={1,2,3,4,5,6,7};
	for(auto X: A)
		cout<<X<<endl;
	return 0;
}

