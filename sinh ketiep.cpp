#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		///bat dau tu bit cuoi cung
		int i=s.size()-1;
		while(i>=0 && s[i]=='1'){
			s[i]='0';
			--i;
		}
		if(i!=-1) 
			s[i]='1';
		cout<<s<< endl;
	}
}



