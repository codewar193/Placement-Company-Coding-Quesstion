class Solution {
  public:
    string armstrongNumber(int n) {
        // Convert the integer to a string to extract its digits
        string num_str = to_string(n);
        int power = num_str.size();
        
        // Calculate the sum of the cubes of its digits
        int sum = 0;
        for (char digit : num_str) {
            int d = digit - '0'; // Convert the character to an integer
            sum += pow(d, power);
        }
        
        // Compare the sum with the original number
        if (sum == n) {
            return "Yes";
        } else {
            return "No";
        }
    }
};
