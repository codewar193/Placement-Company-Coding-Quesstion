class Solution {
public:
    bool isPerfectSquare(int num) {
        bool ans = false;
         int start=0;

        if(num==1) return true;
        int end=num/2;
        while(start<=end)
        {
           long long  int mid = (end+start)/2;
              if(mid*mid==num) return true;
                else if(mid*mid<num) start=mid+1;
                else end=mid-1;
        }
        return ans;
    }
};
