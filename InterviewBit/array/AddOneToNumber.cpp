vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1,j=0;
    vector<int> b;
    for(int i=A.size()-1;i>=0;i--){
        b.push_back((A[i]+carry)%10);
        carry=(A[i]+carry)/10;
    }
    if(carry==1)
        b.push_back(1);
    reverse(b.begin(),b.end());
    while(b[j++]==0);
    if(j-1>0)
        b.erase(b.begin(),b.begin()+(j-1));
    return b;
}
