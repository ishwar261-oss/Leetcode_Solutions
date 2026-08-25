#include<iostream>
using namespace std;

bool isAlphanumeric(char ch){
    if((ch >= '0' && ch <= '9') ||
    (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        return true;
    return false;
}

bool ispalendrome(string s){
    int start = 0;
    int end = s.length() -1;

    while(start < end){
        if(!isAlphanumeric(s[start])){
            start++; 
            continue;
        }
        if(!isAlphanumeric(s[end])){
            end --;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end]))     return false;

            start ++;
            end --;
        }
        return true;
}
int main(){
    string s;
    cout << "Enter a string : ";
    cin>>s;
    bool result = ispalendrome(s);
    cout<<"Is the string a palindrome? " << ((result == true) ? "Yes" : "No") << endl;
    return 0;
}