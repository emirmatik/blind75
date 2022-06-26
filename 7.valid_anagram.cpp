/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of 
a different word or phrase, typically using all the original letters exactly once.

*/

bool isAnagram(string s, string t) {
    vector<int> str1(26, 0), str2(26, 0);
    
    for (char& c : s) {
        str1[c - 'a']++;
    }
    
    for (char& c : t) {
        str2[c - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (str1[i] != str2[i]) return false;
    }
    
    return true;
}