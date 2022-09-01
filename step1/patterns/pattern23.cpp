#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // The value in position (i,j) is 1 plus the maximum of the horizontal 
    // distance from the center and the vertical distance from the center.
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            cout<<1+max(abs(n-i-1),abs(n-j-1));
        }
        cout<<endl;
    }
    return 0;
}