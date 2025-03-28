#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, S, T, p1 = 0, p2 = 0, maxLead = 0, winner = 0;
    cin >> N;
    while (N--) {
        cin >> S >> T;
        p1 += S, p2 += T;
        int lead = abs(p1 - p2);
        if (lead > maxLead) {
            maxLead = lead;
            winner = (p1 > p2) ? 1 : 2;
        }
    }
    cout << winner << " " << maxLead << endl;
    return 0;
}
