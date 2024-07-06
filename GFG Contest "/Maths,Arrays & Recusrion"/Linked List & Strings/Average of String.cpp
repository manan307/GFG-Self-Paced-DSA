int avgOfString(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum+=(int)(s[i]);
    }
    
    int average=floor(sum/s.length());
    
    return average;
}
