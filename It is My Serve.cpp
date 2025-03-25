#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    int tp=p+q;
	    int pn=tp/2;
	    if(pn%2==0){
	        cout<<"alice"<<endl;
	        
	    }
	    else{
	        cout<<"bob"<<endl;
	    }
	}
	return 0;

}
