#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,k;
	    cin>>a>>b>>k;
	    int dis=abs(b-a);
	    int steps=(dis+k-1)/k;
	    cout<<steps<<endl;
	}

}
