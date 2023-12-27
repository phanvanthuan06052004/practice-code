#include<bits/stdc++.h>
using namespace std;

const int maxn=1000000;
int p[maxn+1];
bool nt[maxn+1];

void sang2()
{
	for(int i=1; i<=maxn; i++)
		p[i]=i;	
	for(int i=2; i<=sqrt(maxn); i++)
	{
		if(p[i]==i)
		{
			for(int j=i*i; j<=sqrt(maxn); j+=i)
			{
				if(p[j]==j)
				{
					p[j]=i;
				}
			}
			
		}
	}
	
}

int main()
{
	int t; cin>>t;
	sang2();
	while(t--)
	{
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<p[i]<<" ";
	}	
	cout<<endl;
	}
	return 0;
}

