#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	for(int i=0; i<S.size();i++)
		S[i]=tolower(S[i]);
	for(auto X : S)
		cout<<X;
}