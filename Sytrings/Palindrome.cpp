#include<iostream>
using namespace std;

int isPalindrome_Util(string & s, int left, int right) {
    if (left >= right) 
        return 1;
    if (s[left] != s[right]) 
        return 0;
    return isPalindrome_Util(s, left + 1, right - 1);
}

int isPalindrome(string s){
    int left = 0, right = s.length() - 1;
    return isPalindrome_Util(s, left, right);
}

int main() {
    string s = "abba";
    cout << isPalindrome(s) << endl;

    return 0;
}
