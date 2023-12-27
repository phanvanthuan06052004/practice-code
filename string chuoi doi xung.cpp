//#include<bits/stdc++.h>
//using namespace std;
//bool dx(string S){
//	string res=S;
//	reverse(S.begin(),S.end());
//	return S==res;
//}
//bool dx1(string S){
//	int l=0,r=S.size()-1;
//	while(l<=r){
//		if(S[l]!=S[r]){
//			return false;
//			break;
//		}
//		l++;r--;			//doi xung 1
//	}
//	return true;
//}
//int main(){
//	string S;
//	getline(cin,S);
//	if(dx1(S))
//		cout<<"yes";
//	else
//		cout<<" no";
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;

bool dx1(string S){
	int l=0,r=S.size()-1,cnt=0;
	while(l<=r){
		if(S[l]!=S[r]){
			cnt++;
		}
		l++;r--;
	}
	if(S.size() %2==0 && cnt==0)
		return false;
	else
		if(cnt>=2)
			return false;
		else
			return true;
}
int main(){
	int t;
	cin>>t;
	string S;
	while(t--){
		cin.ignore();
		getline(cin,S);
		if(dx1(S))
			cout<<"yes";
		else
			cout<<"no";
	}
	return 0;
}
