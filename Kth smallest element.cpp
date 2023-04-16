int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r+1);
        for(int i=0;i<r+1;i++)
        {
            if(i+1==k)
            {
                return arr[i];
            }
        }
        return 0;
    }
