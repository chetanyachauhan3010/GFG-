bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++)
        {
            if(A[i]!=B[i])
            {
                return 0;
            }
        }
        return 1;
    }
