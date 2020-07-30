#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    size_t s_size = s.length();
    int number_of_a = 0;
    for(size_t i = 0; i < s_size; i++) {
        if(s[i]=='a') number_of_a++;
    }
    long answer = number_of_a * (n/(long)s_size);
    long remaining = n % (long)s_size;
    for(size_t i = 0; i < remaining; i++) {
        if(s[i]=='a') answer++;
    }
    return answer;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
