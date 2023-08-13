class Solution {
    private:
    int findWays(int *arr, int capacity, int n){
        int days=1, load=0;
        for(int i=0;i<n;i++){
            if(arr[i]+load>capacity) // if load and weight is more than capacity then we will go to a new day and update number of days and load
            {
                days+=1;
                load=arr[i];
            }
            else{
               load+=arr[i];
            }
        }
        return days;
    }
  public:
    int leastWeightCapacity(int arr[], int N, int d) {
        // code here
        int low=*max_element(arr, arr+N);
        int high=accumulate(arr, arr+N, 0); // sum of elements
        while(low<=high){
            int mid=low+(high-low)/2;
            int numberOfDays=findWays(arr, mid, N);
            if(numberOfDays<=d){
                high=mid-1; // if possible recude the high coz we need minimum
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
