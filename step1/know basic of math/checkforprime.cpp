#include<iostream>
using namespace std;
int main()
{
    int n,ctr=0;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        ctr++;
        break;}
    }
    if(ctr>0){
        cout<<"not prime"<<endl;
    }
    else cout<<"prime"<<endl;
    return 0;
}