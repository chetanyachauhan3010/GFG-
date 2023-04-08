vector<int> leaders(int A[], int N){
        // Code here
        int max = A[N-1];
        stack<int> S;
        vector<int> out;
        
        for(int i=N-1;i>=0;i--){
            if(A[i] >= max){
                S.push(A[i]);
                max = A[i];
            }
        }
        
        while(!S.empty()){
            out.push_back(S.top());
            S.pop();
        }
        return out;
    }
