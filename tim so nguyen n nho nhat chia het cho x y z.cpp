#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b){
	return a/ __gcd(a,b)*b;
}

int main(){
	long long x,y,z,n;
	cin>>x>>y>>z>>n;
	long long bcnn=lcm(x,lcm(y,z));
	long long res=((long long) pow(10,n-1) + bcnn-1) / bcnn * bcnn;
	if(res<pow(10,n))
		cout<<res<<endl;
	else
		cout<<"-1\n";
	return 0;
}
