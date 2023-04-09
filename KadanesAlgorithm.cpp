 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
          int maxi=INT_MIN, curr=0;
    for(int i=0; i<n; i++){
        curr+=arr[i];
        if(maxi<curr) maxi=curr;
        if(curr<0) curr=0;
    }
    return maxi;
    }
