
//2nd Solution
int flag=0;
for(int i = 0; i<n;i++){
	        int sum_so_far=0;// find running sum and then compare and then check
	        for(int j =i ;j<n;j++){
	            sum_so_far+=a[j];
	            if(sum_so_far==k){
	                cout<<i+1<<" "<<j+1<<"\n";//1based indexing
	                flag=1;
	            }
	            if(sum_so_far>k){
	                break;
	            }
	        }
	        if(flag==1)
	        break;
}
 
int start = 0;
	    int end = 1;
	    int cur_sum=arr[0];
	    int flag=0;
	    while(end<=n){
	        
	        if(cur_sum>k){
	            cur_sum-=arr[start++];
	        }
	        else if(cur_sum<k)
	        cur_sum+=arr[end++];
	        else if(cur_sum==k)
	        {
	            cout<<start+1<<" "<<end<<"\n";
	            flag=1;
	        }
	        if(flag==1)
	        break;
          }


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

