
void rollingHash(string s, string p)
{
  if(p.length()>s.length())
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    
	    {
	        bool flag=false;
    	    int hash=0;
    	    for(int i=0;i<p.length();i++)
    	    {
    	        hash=hash+((int)(p[i]-'a'))+1;
    	        
    	    }
    	    
    	    int current_hash=0;
    	    for(int i=0;i<p.length();i++)
    	    {
    	        current_hash=current_hash+((int)(s[i]-'a'))+1;
    	    }
    	    
    	    
    	    
    	    if(current_hash==hash)
    	    {
    	        cout<<s.substr(0,p.length())<<" "<<0<<endl;
    	        flag=true;
    	    }
    	    
    	    for(int i=1;i+p.length()-1<s.length()&&i<s.length();i++)
    	    {
    	        
    	        current_hash=current_hash+((int)(s[i+p.length()-1]-'a'))+1-((int)(s[i-1]-'a')+1);
    	        
    	        if(current_hash==hash)
    	        {
    	            cout<<s.substr(i,p.length())<<" "<<i<<endl;
    	            flag=true;
    	        }
    	        
    	    }
    	    
    	    if(flag==false)
    	    cout<<-1<<endl;
	    }
}
