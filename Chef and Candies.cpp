#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int rc=n-x;
	    if(rc<=0){
	        cout<<0<<endl;
	    }
	    else{
	        int packets=(rc+3)/4;
	        cout<<packets<<endl;
	    }
	    
	}
	return 0;

}
