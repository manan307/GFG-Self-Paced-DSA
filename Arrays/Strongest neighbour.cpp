//Back-end complete function Template for C++


// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int sizeOfArray, int arr[]){
    
    // Iterating through all window of size two.
    for(int i = 0, j = 1;i<sizeOfArray-1 && j < sizeOfArray;i++, j++){
        //Printing the maximum between two adjacent elements.
        cout << max(arr[i], arr[j]) << " ";
    }
}
