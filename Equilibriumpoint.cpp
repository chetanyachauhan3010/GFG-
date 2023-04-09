int equilibriumPoint(long long arr[], int n) 
    {
        int sum = 0;  
    	int lsum = 0; 
    	for (int i = 0; i < n; ++i)
    	{
    		sum =sum+ arr[i]; 
        }
    	for (int i = 0; i < n; ++i) 
    	{ 
    		sum=sum - arr[i];  
    		if (lsum == sum) 
    			return i+1; 
    		lsum=lsum+arr[i]; 
    	} 
    	return -1; 
    }
