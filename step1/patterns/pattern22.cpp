#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if(i==1||j==1||j==n-1||i==n){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}