#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	map<char,int> p;
	vector<char> v;
	for(auto X: S){
		p[X]++;
		v.push_back(X);
	}
	sort(v.begin(),v.end());
	int max=0;
	for(int i=0; i<v.size(); i++){
		if(p[v[i]]>max && p[v[i]]!=0){
			max=p[v[i]];
			p[v[i]]=0;
		}
	}

	for(int i=0; i<v.size();i++){
		if(p[v[i]]==max && p[v[i]]!=0){
			cout<<v[i];
			p[v[i]]=0;
		}
	}
}