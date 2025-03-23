#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>=y){
	        cout<<0<<endl;
	    }
	    else{
	        int a=(y-x+7)/8;
	        cout<<a<<endl;
	    }
	    
	}
	return 0;

}
