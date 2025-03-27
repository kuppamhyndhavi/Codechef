#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A,B,X,Y;
	    cin>>A>>B>>X>>Y;
	     unordered_set<int> rivalRaces = {A, B};
        int goldMedals = 0;
        if (rivalRaces.find(X) == rivalRaces.end()) goldMedals++;
        if (rivalRaces.find(Y) == rivalRaces.end()) goldMedals++;
        cout << goldMedals << endl;
    }
	
}
