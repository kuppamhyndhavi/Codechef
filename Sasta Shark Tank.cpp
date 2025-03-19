#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int val =a*10;
	    int val1=b*5;
	    if(val>val1){
	        cout<<"FIRST"<<endl;
	    }
	    else if(val<val1){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;

}
