// Product of array except self
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {  // code by Swaraj
        int product=1 , rproduct=1, lproduct=1;
        int n=nums.size();
        int zeroIndex=0;
        
        vector<int>ans;
        
        if(n<2)
            return nums;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
                zeroIndex = i;  // index of no. 0
            
            product *=nums[i];
        }
        
        for(int i=0; i<zeroIndex; i++) // left product till 0 no.'s index
             lproduct *=nums[i];  // example: [-1,-1,0,3,3] therefore here lproduct will be (-1 * -1) = 1
        
        for(int i=n-1; i>zeroIndex; i--) // right product till 0 no.'s index
             rproduct *=nums[i];
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] != 0)
              ans.push_back(product/nums[i]);
            else
                ans.push_back(lproduct*rproduct);
            
        }
        
        return ans;
}


int main() {
    vector<int>nums= {1,2,3,4};
    vector<int>output = productExceptSelf(nums);
    
    for(int i =0; i<nums.size();i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}