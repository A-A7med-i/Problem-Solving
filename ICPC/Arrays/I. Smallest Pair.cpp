#include <iostream>
#include <limits>
using namespace std;

long long smallest(long long n, long long numbers[]) {
    long long minSum = numeric_limits<long long>::max();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            long long sum = numbers[i] + numbers[j] + j - i;
            minSum = min(minSum, sum);
        }
    }

    return minSum;
}


int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long numbers[n];
        for (long long i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        long long result = smallest(n, numbers);
        cout << result << endl;
    }

    return 0;
}