#include <iostream>

unsigned long long fib_values[61];

void precompute_fibonacci() {
    const int MAX_N = 60;
    
    fib_values[0] = 0;
    fib_values[1] = 1;

    for (int i = 2; i <= MAX_N; ++i) {
        fib_values[i] = fib_values[i - 1] + fib_values[i - 2];
    }
}

void solve() {
    precompute_fibonacci();

    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        std::cout << "Fib(" << N << ") = " << fib_values[N] << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
