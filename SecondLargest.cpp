	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    int sl = -1;
       for (int i = n - 2; i >= 0; i--)
       {
          if (arr[i] != arr[n - 1])
          {
             sl = arr[i];
             break;
          }
       }
    
       return sl;
	}
