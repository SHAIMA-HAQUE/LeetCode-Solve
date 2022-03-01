class Solution {
public:
    int subtractProductAndSum(int n) {
        int d, sum = 0, pdt = 1;
        while(n > 0){
            d = n%10;
            sum += d;
            pdt *= d;
            n /= 10;
        }
        return pdt - sum;
    }
};