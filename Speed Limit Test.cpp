#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    int as=a*y;
	    int bs=b*x;
	    if(as>bs){
	        cout<<"alice"<<endl;
	    }
	    else if(as<bs){
	        cout<<"bob"<<endl;
	    }
	    else{
	        cout<<"EQUAL"<<endl;
	    }
	}

}
