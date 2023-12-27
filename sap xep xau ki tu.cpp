//****PHAN 2 BAI 5 SAU KI TU
//#include<bits/stdc++.h>
//using namespace std;
//
//bool comp(string a, string b){
//	if(a.size()!=b.size())	return a.size()<b.size();
//	return a<b;
//}
//						******sap xep theo tieu chi
//int main(){
//	string s="abc ngon ngu lap trinh python java c++";
//	vector<string> v;
//	stringstream ss(s);
//	string tmp;
//	while(ss>>tmp)
//		v.push_back(tmp);
//	sort(v.begin(),v.end(),greater<string>());
//	for(string x : v){
//		cout<<x<<endl;
//	}
//	
//}


//***PHAN 2 BAI 4
//#include<bits/stdc++.h>
//using namespace std;
//
//bool comp(string a, string b){
//	if(a.size()!=b.size())	return a.size()<b.size();
//	return a<b;
//}
//int main(){
//	int t; cin>>t;
//	cin.ignore();
//	while(t--){
//		string s; getline(cin,s);
//		vector<string> v;
//		stringstream ss(s);
//		string tmp;
//		while(ss>>tmp)
//			v.push_back(tmp);
//		sort(v.begin(),v.end());
//		for(int i=0; i<v.size();i++){
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
//	}
//}



//**PHAN 2 BAI 6
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
}
