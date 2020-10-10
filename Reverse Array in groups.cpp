void reverseArray(int a[],int n,int k){
  k=k%n;
  for( int i = 0 ,j =d-1;i<j;i++,j--){
    swap(a[i],a[j]);
  }
  for( int i = d ,j =n-1;i<j;i++,j--){
    swap(a[i],a[j]);
  }
  for( int i = 0 ,j =n-1;i<j;i++,j--){
    swap(a[i],a[j]);
  }
}

/* reverse is done by 
1. reverse arr by reverse(arr,arr+d)
2. reverse(arr+d,arr+n)
3. reverse(arr,arr+n)
*/