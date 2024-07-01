//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n) {
        // code here
        int c=2;
        while(c<=n){
            if(n%c==0){
                return 0;
            }
            n=n-n/c;
            c++;
            
        }
        return 1;
    
    }
};
