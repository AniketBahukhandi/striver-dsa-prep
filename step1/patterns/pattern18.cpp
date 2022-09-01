#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n-1;k>i;k--){
            cout<<' ';
        }
        for(int j=0;j<=i;j++){
            cout<<char(65+j);
        }
        for(int l=i-1;l>=0;l--){
            cout<<char(65+l);
        }
        cout<<endl;
    }
    
    return 0;
}