#include<iostream>
#include<string>
using namespace std;
char before(char a)
{
    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
	int i=0;        
		if(a=='A')
        {
			return 'Z';
		}
		while(i<26)
        {
				if(b[i]==a)
                {
                    
					return b[i-1];
                }

		    
            i++;
        }
return '0';

}
