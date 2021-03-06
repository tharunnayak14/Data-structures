#include<iostream>
using namespace std;
long long int fast(int x, int n) {
    long long int ans = 1;
    while(n>0)
    {
        int last_bit = n & 1;
        if(last_bit)
        {
            ans *= x; // if last bit is set then multiply the ans with current value of x
        }
        // next discard the last bit
        // square the value of x
        n = n >> 1;
        x = x * x;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int x;
    cin >> x;
    cout << fast(n, x);
    return 0;
}
