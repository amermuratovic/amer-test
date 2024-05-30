#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>
#include <unordered_set>
#include <utility>
#include <bits/stdc++.h>
#include<map>
#include<string>
using namespace std;




class Solution {
    public:

    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first=strs[0], last=strs[n-1];
        for(int i=0;i<min(first.size(), last.size());i++){
            if(first[i]!=last[i]){
                return result;
        }
        result+=first[i];
    }
    
    return result;
    }
};

int main(){
    Solution x;
    vector<string> strs = {"flower","flow","flight"};
    cout << x.longestCommonPrefix(strs) << endl;
    vector<string> strb = {"dog","racecar","car"};
    cout << x.longestCommonPrefix(strb) <<endl;
}