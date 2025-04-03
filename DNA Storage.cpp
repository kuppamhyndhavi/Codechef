#include <bits/stdc++.h>
using namespace std;

string encodeDNA(const string &binary) {
    string encoded = "";
    for (size_t i = 0; i < binary.length(); i += 2) {
        string pair = binary.substr(i, 2);
        if (pair == "00")
            encoded += 'A';
        else if (pair == "01")
            encoded += 'T';
        else if (pair == "10")
            encoded += 'C';
        else if (pair == "11")
            encoded += 'G';
    }
    return encoded;
}

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        string S; 

        cin >> N;
        cin >> S;

        cout << encodeDNA(S) << endl;
    }

    return 0;
}
