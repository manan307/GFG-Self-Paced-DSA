//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        
        // Your logic here
         return __builtin_popcount(a^b); // it will count all 1 after xor operation 
        
    }
};
