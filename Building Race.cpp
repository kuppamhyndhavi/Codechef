#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    double tc=static_cast<double>(a)/x;
	    double tcf=static_cast<double>(b)/y;
	    if(tc<tcf){
	        cout<<"chef"<<endl;
	    }
	    else if(tc>tcf){
	        cout<<"chefina"<<endl;
	    }
	    else{
	        cout<<"both"<<endl;
	    }
	}

}
