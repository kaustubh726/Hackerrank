#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int l1 = s1.size(), l2 = s2.size();
    unordered_map<char, int> m;
    for(int i = 0; i < l1; ++i) {
        m[s1[i]] += 1;
    }
    for(int i = 0; i < l2; ++i) {
        if(m[s2[i]] > 0) {
            return "YES";
        } 
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
