#include<iostream>
#include<string>
using namespace std;
int lengthOfString(string str) {
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

void printString(string str) {
    for(int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << " ";
    }
}

void revserString(string str) {
    int start = 0;
    int end = str.size() - 1;
    for(int i = 0; start <= end; i++) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    printString(str);
}

int main() {
    // char str[] = {'c','h','i','r','a','g'};
    // for(int i = 0; str[i] != '\0'; i++) {
    //     cout << str[i] << " ";
    // }
    // cout << endl;
    // cout << str << endl;


    // string str = "chirag sharma";
    // cout << str[0];


    // when we give space it will give error 
    // string s;
    // cin >> s;
    // cout << s;



    // we can use getline
    // string s;
    // getline(cin, s);
    // cout << s;


    // vowels 
    // string str;
    // cout << "enter a string: ";
    // getline(cin, str);
    // int count = 0;
    // for(int i = 0; str[i] != '\0'; i++) {
    //     if(str[i] == 'a' || 'e' || 'i' || 'o' || 'u') count++;
    // }
    // cout << "Vowels are: " << count;



    // string s = "chirag";
    // int count = 0;
    // for(int i = 0; s[i] != '\0'; i++) {
    //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
    // }
    // cout << count;



    // updating the string, in cpp strings are mutable means we can update the string
    // string str = "chirag";
    // cout << str << endl;
    // for(int i = 0; str[i] != '\0'; i++) {
    //     if(i % 2 == 0) str[i] = 'a';
    // }
    // cout << str << endl;


    // string str;
    // cout << "enter a string: ";
    // getline(cin, str);
    // int ans = lengthOfString(str);
    // cout << ans << endl;



    // string str = "chirag is a pro coder";
    // cout << str << endl;
    // cout << str.size() << endl;
    // cout << str.length() << endl;
    // int len = str.length();
    // str.push_back('s');
    // cout << str << endl;


    // + operator -> used to appned or modify
    // string s = "abc";
    // cout << s << endl;
    // string t = "def";
    // s = s + t;
    // cout << s << endl;

    // string s = "abc";
    // cout << s << endl;
    // s = "xyz" + s;
    // cout << s << endl;


    // string str = "chirag";
    // revserString(str);
    // reverse(str.begin(), str.end())


    // string s = "abcdef";
    // idx or length deni h function me
    // cout << s.substr(1, 3);


    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);
    // int n = str.length();
    // cout << str.substr(n/2);


    int x = 12345;
    string s = to_string(x);
    cout << s << endl;
    cout << s.length() << endl;
}