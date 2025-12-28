/*#443A. Anton and Letters
Input: 
{a, b, c}
Output: 3

Input: {b, a, b, a}
Output: 2

Time complexity O(n) 

*/
//** Using freq Array */ 
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s;
    int freq[26] = {0};
    int count = 0;
    getline(cin, s);
    for(char c : s){
        if( c >= 'a' && c <= 'z'){
            freq[c - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0) count++;
    }

    cout << count << "\n";    
    return 0;
}