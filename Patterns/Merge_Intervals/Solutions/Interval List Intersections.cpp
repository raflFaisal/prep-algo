// Time Complexity: O(M + N)O(M+N), where M, NM,N are the lengths of A and B respectively

// Space Complexity: O(M + N)O(M+N), the maximum size of the answer

vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {

    vector<vector<int>> result;

    if(A.size() == 0 || B.size() == 0)
        return result;

    int i = 0;
    int j = 0;

    while(i<A.size() && j<B.size())
    {   
        int s = max(A[i][0], B[j][0]);
        int e = min(A[i][1], B[j][1]);

        if(s <= e)
            result.push_back({s, e});

        if(A[i][1] > B[j][1])
           j++; 
        else
           i++;
    }
    return result;        
}