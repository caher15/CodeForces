/*#236A.  Boy or Girl
Input: 
wjmzbmr
Output: CHAT WITH HER

Input: xiaodao
Output: IGNORE HIM!

Time complexity O(n) 
*/
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<char, int> freq;
    string username;
    cin >> username;
    for(char s : username){
        freq[s]++;
    }
    auto isOdd = freq.size() %2;
    if(isOdd != 0){
        cout << "IGNORE HIM!\n";
    }
    else{
        cout << "CHAT WITH HER!\n";
    }
    return 0;

}