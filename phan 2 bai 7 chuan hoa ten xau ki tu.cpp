#include<bits/stdc++.h>
using namespace std;
void chuanhoakiTudau(string &s){
	s[0]=toupper(s[0]);
	for(int i=1; i<s.size(); i++)
		s[i]=tolower(s[i]);
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string word;
		while(ss>>word)
			v.push_back(word);
		for(int i=0; i<v.size(); i++){
			chuanhoakiTudau(v[i]);
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
