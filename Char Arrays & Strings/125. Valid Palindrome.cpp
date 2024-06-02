class Solution {
public:
    bool validchar(char ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ||ch>='0' && ch<='9'){
            return true;
        }
        else{
            return false;
        }
    }
    char toLower(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
            return ch-'A'+'a';
        }
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int start =0;
        int end = n-1;
        while(start<=end){
            if(!validchar(s[start])){
                start++;
            }
            else if(!validchar(s[end])){
                end--;
            }
            else if(toLower(s[start])==toLower(s[end])){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
