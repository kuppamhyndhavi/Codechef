#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<"CAR"<<endl;
	    }
	    else if(y>x){
	        cout<<"BIKE"<<endl;
	    }
	    else{
	        cout<<"SAME"<<endl;
	    }
	}

}
