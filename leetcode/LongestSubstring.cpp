/*************************************************************************
	> File Name: LongestSubstring.cpp
	> Author: horace
	> Mail: horaceh@QQ.com 
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0, index = -1;
        int a[256];
        memset(a, -1, sizeof(a));
        for (int i = 0; i < s.length(); i++) {
            if (a[s[i]] - index > 0) {
                index = a[s[i]];
            } 
            if (i - index > max) {
                max = i - index;
            }
            a[s[i]] = i;
        }
        return max;
    }
};