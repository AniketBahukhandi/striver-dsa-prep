#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        vector<ll> ans;
        ll numerator,denominator,remainder;
        if(a>b){
            numerator=a;
            denominator=b;
        }
        else{
            numerator=b;
            denominator=a;
        }
        remainder=numerator%denominator;
        while(remainder!=0){
            numerator=denominator;
            denominator=remainder;
            remainder=numerator%denominator;
        }
        ll gcd=denominator;
        ll lcm=a*b/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        
        return ans; 
    }
};
int main()
{
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        Solution ob;
        vector<long long >ans=ob.lcmAndGcd(a,b);
        cout<<ans[0]<<" "<<ans[1];
    }
    return 0;
}