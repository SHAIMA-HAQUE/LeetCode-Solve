class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        slow = square_sum(slow);
        fast = square_sum(square_sum(fast));
        while(slow != fast){
            slow = square_sum(slow);
            fast = square_sum(square_sum(fast));
        }
        return slow == 1;
    }
    private:
        int square_sum(int n){
            int sum = 0;
            while(n>0){
                int d = n%10;
                sum += d*d;
                n/=10;
            }
            return sum;
        }
};