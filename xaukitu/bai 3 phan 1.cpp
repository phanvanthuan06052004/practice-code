#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	getline(cin,S);
	int x=0,y=0,z=0;
	int i=0;
	while(i<S.size()){
		if(isalpha(S[i])){
			x++;
		}
		else{
			if(isdigit(S[i])){
				y++;	
			}
			else{
				z++;
			}
		}	
		i++;
	}
	cout<<x<<" "<<y<<" "<<z;
}