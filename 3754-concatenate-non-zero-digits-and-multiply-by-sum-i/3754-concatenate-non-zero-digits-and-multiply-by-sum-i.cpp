class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0,ans=0,d,result=0;
        while(n>0)
        {
            d=n%10;
            if(d!=0)
            {
                ans=ans*10+d;
                s=s+d;
            }
            n/=10;
        }
        while(ans>0)
        {
            d=ans%10;
            result=result*10+d;
            ans/=10;
        }
        return s*result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna