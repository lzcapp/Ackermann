#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int akm(int m, int n) {
    if (m == 0) return n + 1;
    if (n == 0) return akm(m - 1, 1);
    return akm(m - 1, akm(m, n - 1));
}

int main() {
    auto start = high_resolution_clock::now();
    int n = 15, m = 3;
    int result = akm(m, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    if (result == 262141) {
        std::cout << "Result: " << result << " (CORRECT)" << std::endl;
    } else {
        std::cout << "Result: " << result << " (WRONG)" << std::endl;
    }

    ::duration<double> seconds = static_cast<::duration<double>>(::duration_cast<::duration<double>>(duration) / ::seconds(1));
    std::cout << "Time taken: " << seconds.count() << " seconds" << std::endl;

    cin.clear();
    cin.sync();
    cin.get();
}
