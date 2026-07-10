#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int  i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna