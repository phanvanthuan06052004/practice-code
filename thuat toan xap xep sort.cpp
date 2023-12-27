//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n,A[100];
//	cin>>n;
//	for(int i=0; i<n; i++)
//		cin>>A[i];
////	sort(A,A+n); tang dan
//	sort(A,A+n,greater<int>());	//sap xem giam dan
//	for(int i=0; i<n; i++)
//		cout<<A[i];
//	return 0;
//}
//
//
//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//int main(){
//	vector<int>v;
//	int n;
//	cin>>n;
//	for(int i=0; i<n; i++){
//		int x;cin>>x;
//		v.push_back(x);
//	}
//	sort(v.begin(),v.end());	//sap xep dung vector
////	sort(v.beign(),v.end(),greater<int>());
//	for(int i=0; i<n; i++)
//		cout<<v[i]<<" ";
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	sort(S.begin(),S.end());	//sap xep theo chuoi
	cout<<S<<endl;
	return 0;
}
