#include <iostream>

using std::cout;
using std::endl;

std::string s = "ABCDE";

void per(int start, int end) {
    if (start == end-1) {
        cout << s << endl;

        return;
    }

    for (int i = 0; i < end - start; ++i) {
        std::swap(s[start], s[start+i]);
        per(start+1, end);
        std::swap(s[start], s[start+i]);
    }
}

int main() {
    per(0, 5);
}