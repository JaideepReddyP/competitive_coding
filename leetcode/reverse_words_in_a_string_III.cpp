#include<iostream>
#include<string>
using namespace std;

void flipWord(string& s, int start, int end) {
    while(start < end) {
        swap(s[start++], s[end--]);
    }
}

string reverseWords(string s) {
    int size = s.length(), prev_index = 0;
    for(int i = 0; i < size; i++) {
        if(s[i] == ' ') {
            flipWord(s, prev_index, i-1);
            prev_index = i+1;
        }
    }
    flipWord(s, prev_index, size-1);
    return s;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverseWords(s);
}