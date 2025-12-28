/*#443A. Anton and Letters
Input: 
{a, b, c}
Output: 3

Input: {b, a, b, a}
Output: 2

Time complexity O(n) 

*/
//** Set */ 
#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
    string s;
    unordered_set<char> mp;
    getline(cin, s);
    for(char c : s){
        if(islower(c)){
            mp.insert(c);
        }
    }
    cout << mp.size() << "\n";
    return 0;
}