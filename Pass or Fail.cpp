#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int s=4*x-n;
	    
	    if(s>=p){
	        cout<<"pass"<<endl;
	    }
	    else{
	        cout<<"fail"<<endl;
	    }
	}

}
