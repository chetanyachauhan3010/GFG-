int gcd(int a, int b)
    {
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
    }
    
    void rotateArr(int arr[], int d, int n){
        d = d % n;
        int g_c_d = gcd(d, n);
        for (int i = 0; i < g_c_d; i++) 
        {
       
            int temp = arr[i];
            int j = i;
     
            while (1) 
            {
                int k = j + d;
                if (k >= n)
                    k = k - n;
     
                if (k == i)
                    break;
     
                arr[j] = arr[k];
                j = k;
            }
            arr[j] = temp;
        }
    }
