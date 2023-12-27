#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,A[100];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
	sort(A,A+n); //tang dan
//	sort(A,A+n,greater<int>()); sap xep giam dan		sap xep mang
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}

//	vector<int> v;
//	int n;
//	cin>>n;
//	for(int i=0;i<n; i++){
//		int x; cin>>x;				sap xep vector
//		v.push_back(x);
//	}
//	sort(v.begin(),v,end());
//	for(int i=0;i<n; i++){
//		cout<<v[i]<<" ";
//	}

//	string S;
//	cin>>S;
//	sort(S.begin(), S.end(),greater<char>());       sap xep string
//	cout<<S<<endl;


//comparator
//true: ban muom a dung truoc b sau khi sap xep
//false: a dung sau b sau khi spa xep
//ban dau a dung truoc b

//bool comp(int a, int b){
//	if(a>b) return true;
//	else return false;
//}
//bool comp(int a, int b){
//	return a>b;   theo minh muon sap xep
//	(giam dan)
//}

// 
//int main(){
//	int A[10]={10,3,4,5,2,4,5,2,7,9};
//	sort(A,A+10,comp);
//	for(int i=0; i<10; i++)							sap xep theo kieu dieu kien comparator
//		cout<<A[i]<<" ";
//	return 0;							
//}


//bool comp(string a, string b){
//	return a.size()<b.size();
//}
//
//int main(){
//	string s="abc ngon ngu lap trinh python java c++";
//	vector<string> v;
//	stringstream ss;
//	string tmp;
//	while(ss>>tmp)
//		v.push_back(tmp);
//	sort(v.begin(),v.end(),greater<string>());
//	for(string x : v){
//		cout<<x<<endl;
//	}
//	
//}


