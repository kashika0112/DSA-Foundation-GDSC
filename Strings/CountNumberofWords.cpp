#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
       int count = 0;
       int n = s.length();
       int seenletter =false;
       int i=0;
       while(i<n)
       {
           seenletter =false;
           while (i<n&&isalpha(s[i]))
               {
                   seenletter=true;
                   i++;
               }
          
          if(s[i]=='\\')
               i+=2;
          else
               i++;   
          if(seenletter==true)
               count++;
       }
       return count;
}