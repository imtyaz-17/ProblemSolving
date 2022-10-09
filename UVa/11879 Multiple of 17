#include <iostream>
using namespace std;

void multiple(string s){
    long long int i,rem=0;
    for(i=0;i<s.length();i++){
        rem=(rem*10+(s[i]-'0'))%17; // string to int by substract 0
    }
    if(rem ==0)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    
    return;
 }
int main(){
   long long int n,rem_int;
   string S;
   int last_digit_d;
    while(scanf("%lld", &n) && n>0){
    last_digit_d=n%10;
    rem_int =n/10;
    rem_int=rem_int-(5*last_digit_d);
    if(rem_int<0)
        rem_int=(rem_int+17)%17;
    S=to_string(rem_int);
    multiple(S);

    }
return 0;
}
