/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  '9XXXXXXXXXXXXXXXXXXXXX'~   ~'OOO8b   d8OOO'~   ~'XXXXXXXXXXXXXXXXXXXXXP'
    '9XXXXXXXXXXXP' '9XX'   DIE    '98v8P'  HUMAN   'XXP' '9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP''v''9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   '9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   'XXXXXb.dX|Xb.dXXXXX'   'dXXP
                     ''      9XXXXXX(   )XXXXXXP      ''
                              XXXX X.'v'.X XXXX
                              XP^X''b   d''X^XX
                              X. 9  '   '  P )X
                              'b  '       '  d'
                               '             '
 
Author      : hellking
File        : FirstMissingPositive
Created on  : Mon May  2 11:37:02 PM IST 2022
Link        : https://leetcode.com/problems/first-missing-positive/
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int ans = 1;
        sort(arr.begin(), arr.end());
        for (auto &x: arr) {
            if (x == ans)
                ans++;
        }
        return ans;
    }
};
