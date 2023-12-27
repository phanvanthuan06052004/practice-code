#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	map<char,int> p;
	for(auto X: S)
		p[X]++;
	for(auto it : p)
		cout<<it.first<<" "<<it.second<<endl;
}