#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int diff=b-a;
	    if(diff>0){
	        if(diff<=x){
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    }else if(diff<0){
	        if(-diff<=y){
	         cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    }else{
	        cout<<"YES"<<endl;
	    }
	        
	    
	    
	}
	return 0;

}
