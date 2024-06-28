#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letters_array(26,0);
        if(s.size()!=t.size()){return false;}
        for(int i=0;i<s.size();i++){
            letters_array[s[i]-'a']++;
            letters_array[t[i]-'a']--;
        }
        for(auto x:letters_array){
            if(x!=0){
                return false;
            }
        }
        return true;
    }
};

//unordered_map approach
//return true if the number of letters in each of the input1 and input2 were the same

    class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char, int> arr1;
            map<char, int> arr2;
            
            for(char ch : s){
                arr1[ch]++;
            }

            for(char ch : t){
                arr2[ch]++;
            }

            return arr1 == arr2;
        }
    };