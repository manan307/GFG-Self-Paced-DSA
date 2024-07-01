//Back-end complete function Template for Java

class Solution{
    // function to convert a given Gray equivalent n to Binary equivalent.
    public static int grayToBinary(int n) {
        int b=0;
        
        //We use a loop and Right shift n everytime until it becomes 0.
        for(n=n;n>0;n=n>>1)
         //We use XOR operation which stores the result of conversion in b.
            b^=n;
            
        //returning the Binary equivalent.
        return b;
    }
       
}
