#include<iostream>
using namespace std;
void print(string s,int n){
    if(n==0){
        return ;
    }
    cout<<s<<endl;
    print(s,n-1);
}
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    print(s,n);
    return 0;
}