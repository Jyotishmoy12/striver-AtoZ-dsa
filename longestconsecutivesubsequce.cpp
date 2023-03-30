class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
     if(n==0) return 0;
     int longest=1;
     unordered_set<int>st;
     for(int i=0;i<n;i++){
         st.insert(nums[i]);
     }
     for(auto it:st){
         if(st.find(it-1)==st.end()){ // are you the first element if you are the first element the previous one will not be on the set
            int cnt=1; // first element
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest, cnt);
         }
     }  
     return longest; 
    }
};
