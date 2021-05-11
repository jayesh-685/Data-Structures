#include <iostream>
#include <string>
using namespace std;

void reverseString (string &s, int start, int end) {
   if (start <= end) {
      char temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      reverseString(s, start+1, end-1);
   }

   else  
      return;
}

int main () {
   string s;
   //cin >> s;
   getline(cin, s);
   reverseString(s, 0, s.length()-1);
   cout << s;
}