#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        int ta=0;
        if (y<=x){
            ta=y;
        }
        else{
            ta=x+2*(y-x);
        }
        cout<<ta<<endl;
        
        
    }
	

}
