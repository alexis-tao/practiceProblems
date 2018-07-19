/*
 * Practice Problem: https://leetcode.com/problems/to-lower-case/description/
 *
 */

char* toLowerCase(char* str) {
    char *cur = str;
    while (*cur) {
        if (*cur >= 'A' && *cur <='Z') {
            *cur = *cur - 'A' + 'a';
        }
        ++cur;
    }
    return str;
}