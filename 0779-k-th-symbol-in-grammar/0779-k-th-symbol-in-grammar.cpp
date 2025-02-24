class Solution {
public:
    int kthGrammar(int n, int k) {
              int result = 0;
              k--;
        
        while (k > 0) {
            result ^= (k & 1);
            k /= 2; 
        }
        return result;
    }
};


