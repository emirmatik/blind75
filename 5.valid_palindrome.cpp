// A phrase is a palindrome if, after converting all uppercase letters into 
// lowercase letters and removing all non-alphanumeric characters, 
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise

bool isPalindrome(string s) { 
    string pure = "";
    
    for (auto lt : s) {
        if (iswalnum(lt)) pure += tolower(lt);
        };

        int i = 0, j = pure.size() - 1;
        while (i < j) {
            if (pure[i] != pure[j]) return false;
            i++;
            j--;
        };

        return true;
    
};