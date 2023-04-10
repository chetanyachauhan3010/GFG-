int binarysearch(int a[], int n, int k) {
        // code here
        int s=0,e=n;
        while(s<=e)
        {
            int mid=(e+s)/2;
            if(a[mid]==k)
            {
                return mid;
            }
            else if(a[mid]>k)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return -1;
    }
