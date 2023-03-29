#include<bits/stdc++.h>
vector<int> nextGreaterPermutation(vector<int> &A) {
    int ind=-1;
    // find the braking point
    int n=A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            ind=i;
            break;
        }
    }
    // the given one is the last
    if(ind==-1){
        reverse(A.begin(), A.end());
        return A;
    }
    // again from back to find the smallest elemenet

    for(int i=n-1;i>ind;i--){
       if(A[i]>A[ind]){
           swap(A[i], A[ind]);
           break;
       } 
    }
    // reversing the last part
    reverse(A.begin()+ind+1, A.end());
    return A;
}
