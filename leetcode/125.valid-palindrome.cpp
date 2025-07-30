// @leet start
class Solution {
public:
    bool isPalindromeMera(string s, int start, int end){
        if(start < end){
            if(s[start] == s[end]) return isPalindromeMera(s, start+1, end-1);
            else return false;
        }
        else{
            return true;
        }
    }
    void removeFaltu(string &s){
        for(int i = 0; i<s.size(); i++){
            if(s[i] < 65 || (s[i] > 90 && s[i] < 96) || s[i] > 122){
                s.erase(s[i], 1);
            }
        }
    }
    bool isPalindrome(string s) {
        removeFaltu(s); 
        return isPalindromeMera(s, 0, s.size()-1);
    }
};
// @leet end
