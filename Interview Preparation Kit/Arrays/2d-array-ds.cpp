#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.

int hourglassSum(vector<vector<int>> arr) {
    int m = -100;

    for(int r=0; r<4; r++){
        for(int c=0; c<4; c++){
            int s = arr[r][c] + arr[r][c+1] + arr[r][c+2] 
                        + arr[r+1][c+1] +
                arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];
            m = max(s,m);
        }
    }        
    return m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
