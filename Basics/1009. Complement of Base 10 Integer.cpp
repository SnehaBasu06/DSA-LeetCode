class Solution {
public:
    int bitwiseComplement(int n) {
        int num =n;
        if(n==0){
            return 1;
        }
        int mask=0;
        while(num!=0){
            mask = (mask<<1)|1;
            num= num>>1;
        }
        int complement = (~n)&mask;
        return complement;
    }
};
