#include <iostream>
using namespace std;

int bigMod(long long int B, long long int P, long long int M){
    if(P==0)
        return 1;
    long long int R = bigMod(B,P/2,M);
    R=(R*R)%M;
    if(P%2==1)
        R=(R*B)%M;
    return R;
}
int main(){
   long long int b,p,m;
    while(scanf("%lld%lld%lld", &b, &p, &m) !=EOF){
    cout<<bigMod(b,p,m)<<endl;
    }
return 0;
}
