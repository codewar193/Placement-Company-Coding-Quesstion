class Solution {
public:
    int isPerfectNumber(long long N) {
        if (N <= 1) return 0;

        long long sum = 1; // Initialize the sum with 1 (1 is always a divisor)

        for (long long i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                sum += i;
                if (i != N / i) {
                    sum += N / i; // Add the pair divisor if it's different from i
                }
            }
        }

        return (N == sum ? 1 : 0);
    }
};
