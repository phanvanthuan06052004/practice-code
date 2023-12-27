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
	int t; cin>>t;
	sangNT();
	
	while(t--)
	{
	int cnt=0;
	long long l; long long r;
	cin>>l>>r;
	int c1=sqrt(l), c2=sqrt(r);
	if(c1 * c1 !=l)
		c1++;
	for(int i=c1; i<=c2; i++)
	{
		if(nt[i])
		{
			cnt++;
		}	
	}
	cout<<cnt<<endl;
	}
	
	return 0;
}

