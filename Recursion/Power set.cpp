

//Function to generate power set of string.
void powerSetUtil(string &str, vector<string>&v,int index = 0,string curr = "")
{
    int n = str.length();
    
    //base case
    if (index == n)
    {
       v.push_back(curr);    
       return;
    }   
    //Two cases for every character
    //(i) We consider the character as part of current subset.
    //(ii) We do not consider current character as part of current subset.
    
    //Calling the function recursively for both cases.
    powerSetUtil(str, v, index+1, curr);
    powerSetUtil(str, v, index+1, curr+str[index]);
}

//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
    vector<string> ans;
    powerSetUtil(s, ans);
    //returning the list.
    return ans;
}
