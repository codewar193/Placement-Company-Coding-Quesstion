class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        string ans;
        int i = 0;
        unsigned int unum = static_cast<unsigned int>(num); // Convert num to unsigned int
        
        while (unum > 0) {
            int temp = unum % 16;
            if (temp < 10) {
                ans.push_back(temp + '0');
            } else {
                ans.push_back(temp - 10 + 'a');
            }

            unum = unum / 16;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
