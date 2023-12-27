#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	int chu=0;
	int so=0;
	int kitu=0;
	for(int i=0; i<S.size(); i++){
		if(isalpha(S[i]))
			chu++;
		else
			if(isdigit(S[i]))
				so++;
			else
				kitu++;
	}
	cout<<chu<<" "<<so<<" "<<kitu<<endl;
	return 0;
}
