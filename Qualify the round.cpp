#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int ts=a*1+b*2;
	    if(ts>=x){
	        cout<<"Qualify"<<endl;
	    }
	    else{
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;

}
