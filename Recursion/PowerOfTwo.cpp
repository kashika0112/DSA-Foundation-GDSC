class Solution {
public:
    bool isPowerOfTwo(int n) {
        if( n == 0 || n == 1)
            return bool(n);
        if(n%2 != 0) return false;
        return isPowerOfTwo(n/2);
    }
};