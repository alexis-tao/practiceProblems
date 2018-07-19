/**
 * Practice Problem: https://leetcode.com/problems/detect-capital/description/
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool detectCapitalUse (char *word) {
  int low = 0;
  int up = 0;
  bool first = false;
  int len = 0;
  const char *cur = word;
  printf ("%s\n", word);
  while (*cur) {
    if ( *cur <= 'Z' && *cur >='A') {   
        if (len ==0) {
            first = true;
        }
        ++up;
    }
    else if ( *cur <= 'z' && *cur>='a') {
        ++low;
    }
    ++len;
    ++cur;
  }
    
  if (low == len || up ==len || (first && low==len-1)) {
    return true;
  }
  return false;
}
