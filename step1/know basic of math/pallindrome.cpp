
#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		string is_palindrome(int n)
		{   int r=0;
            int temp=n;
		    while(n!=0){
                int d=n%10;
                r=r*10+d;
                n/=10;
            }
            if(temp==r)
            return "YES";
            else return "NO";
		}
};

            // second approach
            // string s=to_string(n);
            // reverse(s.begin(),s.end());
            // int num=stoi(s);
            // if(num==n)return "YES";
            // else "NO";


            // third approach
            // string s=to_string(n);
            // for(int i=0;i<s.size()/2;i++)
            // if(s[i]!=s[s.size()-1-i])return "NO";

            // return 'YES';



int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

