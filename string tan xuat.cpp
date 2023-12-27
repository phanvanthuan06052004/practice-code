//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	int cnt[256]={0};
//	for(int j=0; j<S.size();j++){
//		cnt[S[j]]++;
//	}
//	for(int i=0; i<256; i++)
//		if(cnt[i]!=0)
//			cout<<(char)i<<" "<<cnt[i]<<endl;			//sap xep theo thu tu tu dien
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	int cnt[256]={0};
//	for(int j=0; j<S.size();j++){
//		cnt[S[j]]++;
//	}
//	for(int i=0; i<S.size();i++){
//		if(cnt[S[i]]!=0){
//			cout<<S[i]<<" "<<cnt[S[i]]<<endl;     //dem tan suat khong theo thu tu tu dien
//			cnt[S[i]]=0;
//		}		
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	int cnt[256]={0};
//	for(int j=0; j<S.size();j++){
//		cnt[S[j]]++;
//	}
//	int max=0;
//	char c;
//	for(int i=0;i<256; i++){
//		if(cnt[i]>=max){
//			max=cnt[i];    //tan so xuat hien nhieu nhat
//			c=(char)i;	
//		}
//	}
//	cout<<c<<endl;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S1,S2;
//	getline(cin,S1);
//	getline(cin,S2);
//	int cnt[256]={0};
//	for(int i=0; i<S1.size();i++){
//		cnt[S1[i]]=1;
//	}
//
//	for(int i=0;i<S2.size(); i++){
//		if(cnt[S2[i]]==1)					//ktr xuat hien o ca 2 chuoi
//			cnt[S2[i]]=2;
//	}
//	for(int i=0; i<256; i++)
//		if(cnt[i]==2)
//			cout<<char(i);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S1,S2;
//	getline(cin,S1);
//	getline(cin,S2);
//	int cnt[256]={0};
//	for(int i=0; i<S1.size();i++){
//		cnt[S1[i]]=1;
//	}
//									//ktr xuat hien o chuoi thu 1 khong xuat hien o chuoi thu 2
//	for(int i=0;i<S2.size(); i++){
//		if(cnt[S2[i]]==1)				
//			cnt[S2[i]]=0;
//	}
//	for(int i=0; i<256; i++)
//		if(cnt[i]==1)
//			cout<<char(i);
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S1,S2;
//	getline(cin,S1);
//	getline(cin,S2);
//	int cnt[256]={0};
//	for(int i=0; i<S1.size();i++){
//		cnt[S1[i]]=1;
//	}
////Abcdu
////abcdz
////kq:Aabcduz
//	for(int i=0;i<S2.size(); i++){				
//			cnt[S2[i]]=1;	
//	}
//	for(int i=0; i<256; i++)
//		if(cnt[i]==1)
//			cout<<char(i);
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string S;
//	getline(cin,S);
//	int cnt[256]={0};
//	for(int j=0; j<S.size();j++){
//		cnt[S[j]]=1;
//	}
//	bool ok=true;
//	for(int i=97; i<=122; i++){
//		if(cnt[i]==0){
//			ok=false;
//			break;
//		}	
//	}		//xau pangram 1
////thequickbrownfoxjumpsoverthlazydog
////yes
////abcdefghijklmnopzzutvlt
////no
//
//	if(ok==true)
//		cout<<"yes\n";
//	else
//		cout<<"no\n";
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	int cnt[256]={0};
	for(int j=0; j<S.size();j++){
		cnt[tolower(S[j])]=1;
	}
	bool ok=true;
	for(int i=97; i<=122; i++){
		if(cnt[i]==0){
			ok=false;
			break;
		}	
	}		//xau pangram 2
//THEquickbrownfoxjumpsoverthlazydog
//yes
//abcdefghijklmnopzzutvlt
//no

	if(ok==true)
		cout<<"yes\n";
	else
		cout<<"no\n";
	return 0;
}



