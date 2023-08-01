class Solution {
public:
    int addDigits(int num) {
        int sum = num;
        while (sum > 9) {
            int n = sum;
            sum = 0;
            while (n > 0) {
                int temp = n % 10;
                sum += temp;
                n = n / 10;
            }
        }
        return sum;
    }
};
