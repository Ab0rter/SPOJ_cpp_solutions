#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n,m;
	cin >> t;
	
	while(t--)
	{
		cin >> m >> n;
		if(n%m==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 
