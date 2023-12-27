#include <bits/stdc++.h>
using namespace std;

int n;
bool ok;
string S;
vector<string> res;

void ktao(){
	S = string(n, '6');
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && S[i] == '8'){
		S[i] = '6';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		S[i] = '8';
}

void init(){
	for(int i = 1; i <= 13; i++){
		n = i;
		ok = true;
		ktao();
		while(ok){
			string tam = S;
			reverse(tam.begin(), tam.end());
			res.push_back(S + tam);
			sinh();	
		}
	}
}

int main(){
	init();
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		for(int i = 0; i < k; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}
