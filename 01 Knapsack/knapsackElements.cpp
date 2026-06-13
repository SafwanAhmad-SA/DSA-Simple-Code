#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int weight[100], value[100];

    cout << "Enter weight of the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cout << "Enter value (benefit) of the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> value[i];

    int W;
    cout << "Enter maximum capacity of the bag: ";
    cin >> W;

    int dp[100][100];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
        }
    }

    // 0/1 Knapsack Logic
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {

            if (weight[i - 1] <= w) {

                int take = value[i - 1] + dp[i - 1][w - weight[i - 1]];
                int skip = dp[i - 1][w];

                if (take > skip)
                    dp[i][w] = take;
                else
                    dp[i][w] = skip;

            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << endl << "Maximum value I can gain = " << dp[n][W] << endl;

        // Finding selected items
    int selected[100] = {0};

    int w = W;

    for (int i = n; i > 0; i--) {

        if (dp[i][w] != dp[i - 1][w]) {

            selected[i - 1] = 1;

            w = w - weight[i - 1];
        }
    }

    // Printing selected array
    cout << "Selected items: " << endl;

    for (int i = 0; i < n; i++) {
        cout << selected[i] << " ";
    }

    cout << endl;

    return 0;
}