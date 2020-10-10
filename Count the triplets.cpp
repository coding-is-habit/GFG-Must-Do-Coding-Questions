int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    set<int> s;
	    for(int i=0;i<n;i++){
	        s.insert(arr[i]);
	    }
	    int count = 0;
	    for(int i = 0;i < n-1; i++){
	        for(int j = i+1; j < n; j++){
	            if( s.find( arr[i] + arr[j] ) != s.end() )
	            count++;
	            
	        }
	    }
	 return count;   
	}