#include <bits/stdc++.h>
using namespace std;
int ext_euclid(int a, int b, int &x, int &y){ //
    if(b==0){
        y=0;
        x=1;
        return a;
    }
    
    int xx, yy;
    int g = ext_euclid(b, a%b, xx,yy);
    x=yy;
    y= xx-(a/b)*yy;
    
    return g;
}

int main()
{
	int a,b,x,y;
	while (scanf("%d %d", &a, &b) != EOF){
	 int gcd =ext_euclid(a,b,x,y);
	   cout << x << " " << y << " " << gcd << endl;;
	}
	return 0;
}
