class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
                // code here 
        string ans ="";
        string res = "";
        for(int i = 0; i < S.length(); i++) {
            if(S[i]=='.') {
                ans = res + ans;
                ans = S[i] + ans;
                res = "";
            } else {
                res += S[i];
            }
        }
        ans = res + ans;
        return ans;
        // code here 
    } 
};
