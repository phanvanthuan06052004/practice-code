#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	string S1;
	getline(cin,S);
	getline(cin,S1);
	map<char,int> m;
	for(int i=0; i<S.size();i++){
		m[S[i]]=1;
	}
	for(int i=0; i<S1.size();i++){
		if(m[S1[i]]==1){
			m[S1[i]]=2;
		}
	}
	for(auto it : m){
		if(it.second==2){
			cout<<it.first;
		}
	}
	
	
}