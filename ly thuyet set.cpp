#include<bits/stdc++.h>
#include<set>
using namespace std;
//set: CTDL
//tim kiem, xoa:0(logn)
//
//set<kieu_du_lieu> s;
//insert: them 1 phan tu vao set
//size():tra ve so luong phan tu trong set
//dem so luong phan tu trong mang
//dung set no se tu dong sap xep tang dan
//find(): 0(logn)
//count():0(logn): dem so lan xuat hien cua 1 phan tu trong set
//erase(): 0(logn): xoa phan tu
//multiset: van la set nhung cho phep cac phan tu trong set co the trung nhau
//unordered_set: cac phan tu khong con co thu tu find: 0(1)=>0(n)
int main(){
	set<int> s;
	for(int i=0; i<10 ;i++)
		s.insert(i);
	s.erase(5);
	for(int x:s)
		cout<<x<<endl;
}


//int main(){
//	vector<int> v{2,4,5,6,7,8,4,4};
//	set<int> s(v.begin(),v.end());
//	for(int x:s)
//		cout<<x<<endl;
//}
//	
//
//int main(){
//	int A[10]={10,2,3,3,5,6,7,2,4,10};
//	set<int>s;
//	for(int i=0; i<10; i++)
//		s.insert(A[i]);
////	for(int x: s)
////		cout<<x<<" ";
//// dung iterator
////	for(set<int> :: iterator it =s.begin(); it!=s.end(); it++)
////		cout<<*it<<endl;
////	for(auto x: s)
////		cout<<x<<endl;	
//	if(s.find(3)!=s.end())   //if(s.count(3)==1)
//		cout<<"tim thay";
//	else
//		cout<<"khong thay";
//}
