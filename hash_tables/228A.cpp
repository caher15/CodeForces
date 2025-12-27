/*#228A.  Is your horseshoe on the other hoof?
Input: 
1 7 3 3
Output: 1

Input: 7 7 7 7
Output: 3

Time complexity O(n) 
*/
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int> mp;
    int n;
    for(int i = 0; i < 4;i++){
        cin >> n;
        mp[n]++;
    }
    cout << 4 - mp.size() << "\n";
    return 0;

}