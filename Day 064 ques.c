Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

  #include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLen = 0;
    int left = 0;
    
    // Array to store the last seen index of each ASCII character
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    
    for (int right = 0; right < n; right++) {
        unsigned char currentChar = s[right];
        
        // If the character was seen and its last index is inside the current window
        if (lastSeen[currentChar] >= left) {
            left = lastSeen[currentChar] + 1;
        }
        
        lastSeen[currentChar] = right;
        
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }
    
    return maxLen;
}

int main() {
    char s[1000];
    
    // Example test cases
    char* test1 = "abcabcbb";
    char* test2 = "bbbbb";
    char* test3 = "pwwkew";
    
    printf("Input: %s -> Output: %d\n", test1, lengthOfLongestSubstring(test1)); // Output: 3
    printf("Input: %s -> Output: %d\n", test2, lengthOfLongestSubstring(test2)); // Output: 1
    printf("Input: %s -> Output: %d\n", test3, lengthOfLongestSubstring(test3)); // Output: 3
    
    return 0;
  
}


/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
