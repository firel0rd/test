#include <iostream>

using namespace std;

int intval(char c) {
    return int(c-'A'+1);
}

char charval(int n) {
    return char(n+'A'-1);
}

string con(int n) {
    string ret = "";
    // cout << n << endl;
    while(n) {
        // cout << n << endl;
        if(n%26) {
            ret = charval(n%26) + ret;
            n /= 26;
        } else {
            ret = 'Z' + ret;
            n /= 26;
            n--;
        }
    }
    return ret;
}

int con2(string s) {
    int n = 0;
    reverse(s.begin(), s.end());
    // cout << s << endl;
    int j = 1;
    for(int i = 0; i < s.size(); i++) {
        n += j*intval(s[i]);
        j *= 26;
    }
    return n;
}

int main() {
    
}
