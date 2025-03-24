#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int n=abs(x1-x2);
	    int m=abs(y1-y2);
	    int dis=max(n,m);
	    cout<<dis<<endl;
	}
	return 0;

}
