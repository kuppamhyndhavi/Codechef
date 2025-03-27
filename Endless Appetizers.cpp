#include <iostream>
#include <vector>
using namespace std;

vector<int> maximumPlates(int t, vector<tuple<int, int, int>> test_cases) {
    vector<int> results;

    for (auto& test_case : test_cases) {
        int X, Y, R;
        tie(X, Y, R) = test_case;
        int extra_sticks = R / 30;
        int total_sticks = X + extra_sticks;
        int plates = (total_sticks + Y - 1) / Y;
        results.push_back(plates);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    vector<tuple<int, int, int>> test_cases;
    for (int i = 0; i < t; ++i) {
        int X, Y, R;
        cin >> X >> Y >> R;
        test_cases.emplace_back(X, Y, R);
    }
    vector<int> results = maximumPlates(t, test_cases);
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
