int gcd(int a,int b){
    
    if(a==0)return b;
    
    return gcd(b%a, a);
}
/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
int num3,den3;

den3=  (den1 * den2)/gcd(den1,den2);//LCM


num3 = (num1 * (den3/den1)) + (num2 * (den3/den2));


int common_factor = gcd(num3,den3);
num3= num3/common_factor;
den3 = den3/common_factor;


cout <<num3<<"/"<<den3<<endl;

 }
