#include<iostream>
using namespace std;

bool isfreqSame(int freq1[], int freq2[]){
    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i])
        return true;
    }
    return false;
}
bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        int idx = freq[s1[i] - 'a'];
        idx++;
    }
    int windowSize = s2.length();
    for(int i = 0; i < s2.length(); i++){
        int windowIndex = 0, idx = 0;
        int windowFreq[26] = {0};
        while(windowIndex < windowSize && idx < s2.length()){
            windowFreq[s2[i] - 'a']++;
            idx++;
            windowIndex++;
        }

        if(isfreqSame(freq, windowFreq))
            return true;
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool ans = checkInclusion(s1, s2);
    cout<<ans;
    return 0;
}