#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    bool went_down = false;
    int altitude = 0, answer = 0;
    for(int i=0; i<n; i++) {
        if(s[i]=='D') altitude -= 1;
        else altitude += 1;

        if(altitude<0 and !went_down)
            went_down = true;

        else if(altitude>=0 and went_down) {
            went_down = false;
            answer += 1;
        }
    }
    return answer;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
