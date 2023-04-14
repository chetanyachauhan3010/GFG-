int max(int x, int y)
    {
        return (x > y) ? x : y;
    }
 

    int minJumps(int arr[], int n)
    {
        if (n <= 1)
            return 0;
          if (arr[0] >= n-1)
              return 1;
     
        if (arr[0] == 0)
            return -1;
        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;
     
        int i = 1;
        for (i = 1; i < n; i++) {
            if (i == n - 1)
                return jump;
           
              if (arr[i] >= (n-1) - i)
                  return jump + 1;
     
            maxReach = max(maxReach, i + arr[i]);
     
            step--;
     
            if (step == 0) {
                jump++;
     
                if (i >= maxReach)
                    return -1;
     
                step = maxReach - i;
            }
        }
     
        return -1;
    }
