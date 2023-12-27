#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	set<char> m;
	for(int i=0; i<S.size(); i++){
		m.insert(S[i]);
	}
	int dem=m.size();
	if(dem==26)
		cout<<"YES";
	else
		cout<<"NO";
}