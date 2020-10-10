int majorityWins(int arr[], int n, int x,int y)
{
   map<int,int> m;
   for(int i = 0;i<n;i++){
       if(arr[i]==x)
       m[x]++;// inc freq of x
       else if(arr[i]==y)
       m[y]++;//inc freq of y
   }
   if(m[x]==m[y])
   return min(x,y);// return min if equal
   else
   return (m[x]>m[y]?x:y);//return element with max freq
}