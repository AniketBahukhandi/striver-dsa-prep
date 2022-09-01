#include<iostream>
using namespace std;
long long reversebit(long long n){
    long long ans=0;
    for(int i=0;i<32;i++){
        ans<<=1;
        if(n&1)ans++;
        n>>=1;
    }
    return ans;
}
int main()
{
    long long n;
    cin>>n;
    cout<<reversebit(n);
    return 0;
}