#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int l,c;
	    cin >> l >> c;
	    
	    for(int i = 1; i <= l; i++)
	    {
	        for(int j = 1; j <= c; j++)
	        {
	            if(i == 1 || i == l)
	            {
	                cout << "*";
	                continue;
	            }
	             if(j == 1 || j == c)
	            {
	                cout << "*";
	                continue;
	            }
	            cout << ".";
	            
	        }
	        cout << "\n";
	    }
	    cout << "\n";
	}
} 
