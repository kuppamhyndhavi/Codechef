#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     string str = to_string(n);
        
        
        reverse(str.begin(), str.end());
        int reversedNumber = stoi(str);
        cout << reversedNumber << endl;
	}
	return 0;

}
