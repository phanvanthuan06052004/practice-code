//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	stringstream ss(S);
//	string tam;
//	while(ss>>tam){
//		cout<<tam<<endl;
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	stringstream ss(S);
//	string tam;
//	int cnt=0;
//	while(ss>>tam){
//		cnt++;
//	}
//	cout<<cnt;		//dem so tu
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
//2
//Python   java C++ PHP JS --> PHP JS
//Pham NGOC hai-->NGOC
bool check(string S){
	for(int i=0; i<S.size(); i++){
		if(!isupper(S[i]))
			return false;	
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string S;
		getline(cin,S);
		stringstream ss(S);
		string tam;
		while(ss>>tam){
			if(check(tam))
				cout<<tam<<" ";		//in ra nhung tu viet hoa
		}
		cout<<endl;
	}
	return 0;
}
