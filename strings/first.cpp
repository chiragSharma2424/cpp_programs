#include<iostream>
#include<string>
using namespace std;
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



    string s = "chirag";
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
    }
    cout << count;
}