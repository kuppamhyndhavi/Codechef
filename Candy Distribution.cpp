#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n%m==0){
	        
	    
	    int cc=n/m;
	    if(cc%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	    else{
	         cout<<"NO"<<endl;
	        
	    }
	}
	return 0;

}
