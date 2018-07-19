/*
 * Practice Problem: https://leetcode.com/problems/jewels-and-stones/description/
 *
 */

 bool member (char x, char *word) {
    const char *cur = word;
    while (*cur) {
        if (*cur == x) {
            return true;
        }
        ++cur;
    }
    return false;
}
int numJewelsInStones(char* J, char* S) {
    const char *first = S;
    int count = 0;
    while (*first) {
        if ( member(*first, J)) {
            ++count;
        }
        ++first;
    }
    return count;
}

