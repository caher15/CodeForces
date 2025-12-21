/*#4C.  Registration system
Input: 
4
abacaba
acaba
abacaba
acab
Output: 
OK
OK
abacaba1
OK

Input: strs = ["a","b"]
Output: 0

Time complexity O(n) 
*/
#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;

string Solution(int n){
    unordered_map<string, int> mp;

    while(n--){
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK\n";
        }else{
            cout << s << mp[s] << "\n";
        }
        mp[s]++;

    }

}

int main(){
    int n;
    cin >> n;
    string result = Solution(n);
    cout << result << "\n";
    
    return 0;
}