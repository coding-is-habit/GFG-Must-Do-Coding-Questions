#include <bits/stdc++.h>
#define int long long int
using namespace std;

vector<int> subarr(int arr[],int n,int sum)
{
    
    int j = 0;
    int curr = 0;
    vector<int> v;
    for(int i=0;i<n;++i){
        while(j < n && curr < sum){
        curr+=arr[j];
        ++j;
        }
        if(curr == sum){
         v.push_back(i);
         v.push_back(j-1);
         return v;
        }
        curr-=arr[i];
    }
    
    return {-1};
    
}
int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector<int >v;
	    v=subarr(arr,n,sum);
	    if((int)v.size()==1){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<v[0]+1<<" "<<v[1]+1<<endl;
	    }
	    }
	
	return 0;
}