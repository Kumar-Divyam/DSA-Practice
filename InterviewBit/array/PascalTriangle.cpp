vector<vector<int> > Solution::solve(int A) {
    vector<vector <int>> res;
    vector<int> pre;
    if(A==0)
        return res;
    pre.push_back(1);
    res.push_back(pre);
    if(A==1)
        return res;
        
    for(int i=2;i<=A;i++){
        vector<int> vec;
        vec.push_back(1);
        for(int j=0;j<pre.size()-1;j++){
            int t=pre[j]+pre[j+1];
            vec.push_back(t);
        }
        vec.push_back(1);
        res.push_back(vec);
        pre=vec;
    }
    return res;
}
