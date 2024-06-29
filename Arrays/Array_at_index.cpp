//Back-end complete function Template for C++

class Solution{
  public:
    //Function to insert a element at a given index in an array.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        // if given index is last index we simply assign the element at last index.
        if(index == sizeOfArray-1)
        {
            arr[index] = element;
            return;
        }
        
        //if given index is not last index we need to shift all the elements starting
        //from that index to the last element towards right by 1 position.
        arr[sizeOfArray-1] = -1;
        //we iterate from last index to the index given.
        for(int i = sizeOfArray-1; i > index; i--)
        {
            //we simply swap the values at ith and (i-1)th index in the array.
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
        //Then we insert the given element at given index.
        arr[index] = element;
    }
};
