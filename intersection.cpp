#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]) // 1 st array element is smaller
		i++;
		else if(arr1[i]>arr2[j])
		j++; // second array element is smaller
		else{
			// both are equal
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
}
