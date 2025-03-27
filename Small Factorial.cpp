#include <iostream>
using namespace std;

int main() {
    unsigned long long factorial[21] = {1};
    for (int i = 1; i <= 20; ++i) factorial[i] = factorial[i - 1] * i;

    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << factorial[N] << endl;
    }
    return 0;
}
