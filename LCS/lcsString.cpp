// LCS
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int n = s1.length();
    int m = s2.length();

    int dp[n+1][m+1] = {};

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    //Backtrack to find LCS
    string lcs = "";
    int i=n;
    int j=m;

    while(i>0 && j>0){
        if(dp[i][j] == dp[i][j-1]){
            j--; // move left
        }
        else if(dp[i][j] == dp[i-1][j]){
            i--; // move up
        } else{
            lcs += s1[i-1];
            i--;
            j--; //move diagonal
        }
    }

    reverse(lcs.begin(), lcs.end());

    cout << "\nLength of LCS = " << dp[n][m] << endl;
    cout << "LCS = " << lcs << endl;

    return 0;
}
