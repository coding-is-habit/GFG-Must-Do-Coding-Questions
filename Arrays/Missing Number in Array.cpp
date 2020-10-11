#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    int s=n*(n+1)/2;
	    for(int i=0;i<n-1;i++){
	        cin>>x;
	        s-=x;
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
//2nd approach
int x=1;
for(int i = 1; i<=n;i++)
x^=i;       //xor all the number from 1 to n
for(int i = 0;i<n-1;i++)
x^=arr[i]; // xor all the elements of array 
return x;