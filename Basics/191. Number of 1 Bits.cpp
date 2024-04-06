class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hamw=0;
        
        while(n!=0){
            if(n&1){
                hamw++;
            }
            n = n>>1;
        }
        return hamw;
        
    }
};
