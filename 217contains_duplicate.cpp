#include <bits/stdc++.h>>
#include <vector>

using namespace std;

//brute force approach
//time complexity: O(n^2)
class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            int n = nums.size();
            for(int i=0; i<n-1; i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]==nums[j])
                    return true;
                }
            }
            return false;
        }
};

//sorting approach
//time compleity: O(nlogn)

class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            sort(nums.begin(), nums.end());
            int n = nums.size();
            for(int i = 1; i<n; i++){
                if(nums[i]==nums[i-1]) return true;
            }
            return false;
        }
};

//hash set 
//time complexity: O(n)

class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            unordered_set<int> seen;
            for (int num:nums){
                if(seen.count(num)>0)
                    return true;
                seen.insert(num);
            }
            return false;
        }
};

//hash map
//it keeps account of the duplicate numbers as well
//more info, more interations kind

class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            unordered_map<int, int> seen;
                for (int num: nums){
                    if (seen[num]>=1) return true;
                    seen[num]++;
                }
                return false;
        }
};


