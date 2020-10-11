vector<int> v;
	   for(int i = 0,j=n-1,count=0;count<n;count++){
	       if(count%2==1)//index of smaller element is odd
	       v.push_back(arr[i++]);
	       if(count%2==0)//index of larger element is even 
	       v.push_back(arr[j--]);
	   }
	   for(int i = 0 ;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<"\n";