class Solution{
    public:
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int a[], int d, int n){
        d%=n;
        //First reversing d elements from starting index.
        reverse(a, a+d);
        //Then reversing the last n-d elements.
        reverse(a+d, a+n);
        //Finally, reversing the whole array.
        reverse(a, a+n);
        
    }

};
