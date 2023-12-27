#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.fi!=b.fi)
		return a.fi>b.fi;
	return a.se>b.se;
}
int main(){
//	pair<data_type1,data_type2> p;
	pair<int,int> p = make_pair(100,200);
//	first
//	second
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	pair<string,int> p = make_pair("nguyen van b", 10);
	p.first= "nguynen van a";
//	**c++ moi: pair<string,int> p{"nguyen van b",10};	
//*** mang A[100];
	pair<int, int> a[100];
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].fi>>a[i].se;
	}
//***thuc hanh voi vector<pair<int,int >> v;
	vector< pair<int,int>> v;
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	for(int i=0; i<n; i++){
		cout<<v[i].fi<<" "<<v[i].se;
	}
	//for each
	for(pair<int,int> x: v){
		cout<<x.fi<<" "<<x.se;
	}
	//for auto
	for(auto it : v){
		cout<<it.fi<<" "<<it.se;
	}
//****thuc hanh voi set
	set<pair<int,int>> se;
	se.insert({1,2});
	se.insert({3,4});
	se.insert({1,1});
	se.insert({3,4});
	for(auto it : se){
		cout<<it.fi<<" "<<it.se;
	}
//**thuc hanh sap xep sort: xap xep theo thu tu first giam dan neu first bang nhau thi sap xep second giam dan
	pair<int,int> a[5];
	a[0] = {1,2};
	a[1] = {3,4};
	a[2] = {1,1};
	a[3] = {3,2};
	a[4] = {4,5};
	sort(a,a+5,cmp); 
	for(auto it : a)
		cout<<it.fi<<" "<<it.se<<endl;
//*** cac dang cua pair:
	pair<char,int> p;
	pair<char,char> p;
	pair<set<int>,int> se;
	pair<vector<int>, string> se;
//***long pair:
	pair< pair<int,int>, int> p;
	cin>>p.fi.fi>>p.fi.se>>p.se;
	pair<int,pair<int,int>> p1;
	cin>>p1.fi>>p1.se.fi>>p1.se.se;
}