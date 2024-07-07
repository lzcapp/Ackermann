#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int akm(int m, int n) {
    if(m == 0) return n + 1;
    if(n == 0)return akm(m - 1, 1);
    return akm(m - 1,akm(m, n - 1));
}

int main() {
    auto start = high_resolution_clock::now();
    int n = 15,m = 3;
    int result = akm(m, n);
    cout << "Result: " << result << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    double seconds = duration.count() / 1e6;
    cout << "Time taken: " << seconds << " seconds" << endl;
    return 0;
}
