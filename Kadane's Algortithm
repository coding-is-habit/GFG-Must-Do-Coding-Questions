#include <bits/stdc++.h>
#define int long long int
using namespace std;
int maxSubArray(int  nums[],int n) {
       int max_here=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<n;++i)
        {
            max_here=max(nums[i],max_here+nums[i]);
            max_sum=max(max_sum,max_here);
        }
        return max_sum;
        
    }
int32_t main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++ )
	        cin>>arr[i];
	    sum=maxSubArray(arr,n);
	    cout<<sum<<"\n";
	}
	return 0;
}