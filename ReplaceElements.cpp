/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'
    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP'`v'`9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP
                     `'      9XXXXXX(   )XXXXXXP      `'
                              XXXX X.`v'.X XXXX
                              XP^X'`b   d'`X^XX
                              X. 9  `   '  P )X
                              `b  `       '  d'
                               `             '
 
Author      : hellking
File        : ReplaceElements
Created on  : Thu, 01 June, 2023
Link        : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        int max = -1;
        ans[arr.size() - 1] = max;
        for (int i=arr.size()-1; i>0; i++) {
            if (arr[i] > max) {
                max = arr[i];
                ans[i] = max;
            } else {
                ans[i]  = max;
            }
        }
        return ans;
    }
};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    return 0;
}