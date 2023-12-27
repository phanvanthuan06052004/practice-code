#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int l,r; cin>>l>>r;
		int c1=sqrt(l), c2=sqrt(r);
		if(c1*c1!=l)
			c1++;
//		for(int i=c1; i<=c2; i++)
//		{
//			cout<<i*i<<" ";				liet ke chinh phuong
//		}
//		cout<<endl;
			cout<<c2-c1+1<<endl;    		//dem so chinh phuong trong doan	
	}
}
