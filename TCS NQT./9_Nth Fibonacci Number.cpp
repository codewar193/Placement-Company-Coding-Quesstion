class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        
      int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
    }
    return b;
    }
};
