//Back-end complete function Template for C++

const char hashTable[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 

class Solution
{
    public:
    //recursive function to return all possible words that can
    //be obtained by input number[] of size n.  
    void printWordsUtil(int number[],int curr_digit,string output,int n,vector <string> &res) 
    {
        int i; 
        //base case, if current output word is prepared.
        if (curr_digit == n) 
        { 
            //pushing the word in output list.
            res.push_back(output);
            return ; 
        } 
      
        //trying all 3 possible characters for current digit in number[] 
        //and calling recursive function for remaining digits.
        for (i=0; i<strlen(hashTable[number[curr_digit]]); i++) 
        { 
            output.push_back(hashTable[number[curr_digit]][i]); 
            printWordsUtil(number, curr_digit+1, output, n, res); 
            if (number[curr_digit] == 0 || number[curr_digit] == 1) 
                return; 
            output.pop_back();
        } 
    } 
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector <string> res;
        string result;
        printWordsUtil(a, 0, result, N, res);
        
        //returning the result.
        return res;
    }
};
