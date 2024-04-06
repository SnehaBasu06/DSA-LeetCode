class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int sum =0;
        int prod = 1;
        while(num!=0){
            int rem = num%10;
            sum = sum + rem;
            prod = prod*rem;
            num = num/10;

        }
        int dif = prod - sum;
        return dif;
        
    }
};
