#include<bits/stdc++.h>
using namespace std;
//Extended euclid algorith (thuat toan euclid mo rong)
// giai thuat tim he so cua phuong trinh ax+b=gcd(a,b)
int x,y,g;
void extended_gcd(int a, int b){
	if(b==0){
		x=1;
		y=0;
		g=a;
	}
	else{
		extended_gcd(b,a%b);
		// da co x1,y1: x, y
		int tmp=x; // x1
		x=y;
		y=tmp- a/b *y;
	}
}

int main(){
	extended_gcd(16,10);
	cout<<x<<" "<<y<<" "<<g;		// toa do x,y
	return 0;
}
