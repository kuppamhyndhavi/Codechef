#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=4){
	        cout<<1<<endl;
	    }
	    else{
	        int p=n/4;
	        if(n%4!=0){
	            p+=1;
	        
	       
	   
	    }
	     cout<<p<<endl;
	}
	}
	
	return 0;

}
