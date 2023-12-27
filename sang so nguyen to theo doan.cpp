#include<bits/stdc++.h>
using namespace std;

void sangNTTheoDoan(int l, int r)
{
	bool nt[r-l+1];
	for(int i=0; i<=r-l; i++)
	{
		nt[i]=true;
	}
					
	for(int i=2; i<=sqrt(r);i++)
	{
		for(int j= max(i*i, (l+i-1)/i*i); j<=r; j+=i)
		{
			nt[j-l]=false;
		}
	}

	for(int k=max(2,l); k<=r; k++)
	{
		if(nt[k-l])
		{
			cout<<k<<" ";
		}
	}
}

int main()
{
	
	int l,r;
	cin>>l>>r;
	sangNTTheoDoan(l,r);
	return 0;
}

