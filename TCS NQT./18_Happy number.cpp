class Solution {
public:
    bool isHappy(int n) {
        set<int> my_set;
        int sum;
        int temp;

        while(1){
          
          sum=0;
          while(n>0){
              temp = n%10;
              sum+=temp*temp;
              n=n/10;
          }
          if(sum==1)return true;
        
            else if (my_set.find(sum) != my_set.end())
                return false;

          my_set.insert(sum);
          n= sum;
            
        }

     return false;
    }
};
