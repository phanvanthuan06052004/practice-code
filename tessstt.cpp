#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string S;
		getline(cin,S);
		stringstream ss(S);
		string tam;
		vector<string> a;
		while(ss>>tam){
			a.push_back(tam);
		}
		cout<<a.size()<<endl;
	}
	
	return 0;
}