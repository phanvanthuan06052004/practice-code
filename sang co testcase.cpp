#include<bits/stdc++.h>
using namespace std;

bool nt[10001];

void sang()
{
	for(int i=0; i<=10000; i++)
	{
		nt[i]=true;
	}
	for(int i=2; i<=sqrt(10000); i++)
	{
		if(nt[i])
		{
			for(int j=i*i; j<=10000; j+=i)
				nt[j]=false;
		}
	}
}

int main()
{
	sang();
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		for(int i=2; i<=n/2; i++)
		{
			if(nt[i] && nt[n-i])
			{
				cout<<i<<" "<<n-i<<endl;
			}
		}
		t--;
	}
	return 0;
}
