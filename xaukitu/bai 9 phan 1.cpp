#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	string S1;
	getline(cin,S);
	getline(cin,S1);
	map<char,int> m;
	vector<char> v;
	for(int i=0; i<S.size();i++){
		m[S[i]]++;
		v.push_back(S[i]);
	}
	for(int i=0; i<S1.size();i++){
		m[S1[i]]++;
		v.push_back(S1[i]);
	}
	for(int i=0; i<v.size();i++){
		if(m[v[i]]!=0){
			cout<<v[i];
			m[v[i]]=0;
		}	
	}
}