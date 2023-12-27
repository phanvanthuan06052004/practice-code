#include<bits/stdc++.h>
using namespace std;

const int maxn=1000;
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
	int t; cin>>t;
	sangNT();
	while(t--)
	{
	int n;
	cin>>n;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(nt[i])
		{
			cout<<i*i<<" ";
		}	
	}
	cout<<endl;
	}
	
	return 0;
}

