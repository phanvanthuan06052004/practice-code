#include<bits/stdc++.h>
using namespace std;

const int maxn=1000000;
bool nt[maxn+1];
void sangNT()
{
	for(int i=0; i<=maxn; i++)
		nt[i]=true;
	nt[0]=nt[1]=false;			
	for(int i=2; i<=sqrt(maxn);i++)
	{
		if(nt[i])
			for(int j=i*i; j<=maxn; j+=i)
				nt[j]=false;
	}
}

int main()
{
	
	int n;
	cin>>n;
	sangNT();
	for(int i=0; i<n; i++)
		if(nt[i])
			cout<<i<<" ";
	return 0;
}

