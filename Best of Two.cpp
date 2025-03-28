#include <iostream>
#include <algorithm> // For sort
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        int alice[] = {A1, A2, A3};
        int bob[] = {B1, B2, B3};

        sort(alice, alice + 3);
        sort(bob, bob + 3);

        int aliceScore = alice[1] + alice[2];
        int bobScore = bob[1] + bob[2];

        if (aliceScore > bobScore) {
            cout << "Alice" << endl;
        } else if (bobScore > aliceScore) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
