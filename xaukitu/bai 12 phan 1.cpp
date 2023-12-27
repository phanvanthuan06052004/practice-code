#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	map<char,int> m;
	for(int i=0; i<S.size();i++){
		m[S[i]]++;
	}
	int dem=0;
	int res=m.size();
	for(int i=0; i<S.size();i++){
		if(m[S[i]]==2)
			dem++;
	}
	if(dem==res)
		cout<<"YES";
	else
		cout<<"NO";
}