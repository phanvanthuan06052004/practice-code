#include<bits/stdc++.h>
using namespace std;
//map<data_type1,data_type2> m;
//size()
//insert
//quan trong cai key, trung key se khong lay cai sau, duoc sap xep tu dong tang dan
//m[key]=value
//find: tra ve iterator
//count: tra ve so lan xuat hien cua key trong map
//erase: xoa phan tu trong map

//set, multiset, unordered_set
//map, multimap(sdung insert ko dung m[key]=value), unordered_map

//**bai toan tinh tan suat:
//1: bai toan dnah cho so
int main(){
	map<int,int> mp;
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		mp[x]++;
	}
	for(auto x : mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
//2: bai toan dnah cho string ,char
int main(){
	map<char,int> mp;
	string S;
	getline(cin,S);
	for(char x : S){
		mp[x]++;		//duyet tung ki tu con duyet tung chu thi sdung stringstream
	}
	for(auto x : mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
int main(){
	map<int, int> m;
	m.insert({1,5});
	m.insert({2,3});
	m.insert({2,5});
	m.insert({1,4});
	m.insert({5,10});
	//***cach nhap thu 2:
	m[1]=5;
	m[2]=3;
	m[2]=5;
	m[1]=4;
	m[5]=10;
	//*** co the su dung m[100]++ de tinh tan suat
	//duyet bang for each
	for(pair<int,int> x: m){
		cout << x.first<<" "<<x.second<<endl;
		//cout<< x.first<<" "<<m[x.first]<<endl;
	}
	//duyet bang iterator
	for(map<int,int>::iterator it = m.begin(); it!=m.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	//for auto
	for(auto it : m){
		cout<<it.first<<" "<<it.second<<endl;
	}
	
}
//***BAI TOAN TIM KIEM FIND(): tra ve iterator || count()
//1: dạng tìm kiếm nêu kết quả yes no
int main(){
	map<int, int> m;
	m[1]=5;
	m[2]=3;
	m[2]=5;
	m[1]=4;
	m[5]=10;	//**luu y: chi tim kiem KEY
	if(m.find(3)==m.end()){
		cout<<"khong tim thay";
	}
	else
		cout<<"tim thay";
}
//2:dạng tìm kiếm tới vị trí con trỏ key ,value
int main(){
	map<int, int> m;
	m[1]=5;
	m[2]=3;
	m[2]=5;
	m[1]=4;
	m[5]=10;
	auto pos = m.find(3); //map<int,int> :: iterator pos = m.find(3);
	if(pos==m.end()){
		cout<<"khong tim thay";
	}
	else
		cout<<"tim thay"<<(*pos).first<<" "<<(*pos).second<<endl;
}
//3: tim kiem bang count()
int main(){
	map<int, int> m;
	m[1]=5;
	m[2]=3;
	m[2]=5;
	m[1]=4;
	m[5]=10;
	int dem=count(1);
	if(dem!=0){
		cout<<"tim thay";
	}	//**luu y:chi tim kiem key
	else
		cout<<"khong tim thay";
}