
// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    if(n==1&& arr[0]==1)
    return 0;
    int low=0;
    int high=n-1;
   
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0)//if arr[mid]=0 then check for 1 in right side and update low=mid+1
        low=mid+1;
        else if(arr[mid]==1 ) //equal to 1
        {
            if(arr[mid-1]==0 && mid>0||mid==0)//if arr[mid]=1 then check if the element at arr[mid-1]=0 then return mid  
            return mid;
            else
            high=mid-1;  //else if arr[mid-1]!=0 update high=mid-1;

        }
    }
    return -1;
}