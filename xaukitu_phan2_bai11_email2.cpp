#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		for(int i=0; i<s.size();i++)
			s[i]=tolower(s[i]);
		vector<string> v;
		stringstream ss(s);
		string word;
		while(ss>>word)
			v.push_back(word);
		for(int i=0; i<v.size()-1; i++)
			cout<<v[i][0];
		cout<<v[v.size()-1]<<"@gmail.com";
		cout<<endl;
		}
}
