class Solution {
public:
    bool checkDivisibility(int n) {
        int d,sum=0,product=1;
        int t=n;
        while(n>0)
        {
            d=n%10;
            sum+=d;
            product*=d;
            n=n/10;
        }
        if(t%(sum+product)==0)
        return true;
        else
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna