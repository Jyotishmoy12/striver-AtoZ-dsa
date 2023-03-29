vector<int> superiorElements(vector<int>&a) {
    int max=INT_MIN;
    vector<int>ans;
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}
