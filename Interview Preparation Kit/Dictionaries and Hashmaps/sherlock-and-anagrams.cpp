#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> prime_map;

void init_prime() {
    prime_map['a']= 2;
    prime_map['b']= 3;
    prime_map['c']= 5;
    prime_map['d']= 7;
    prime_map['e']= 11;
    prime_map['f']= 13;
    prime_map['g']= 17;
    prime_map['h']= 19;
    prime_map['i']= 23;
    prime_map['j']= 29;
    prime_map['k']= 31;
    prime_map['l']= 37;
    prime_map['m']= 41;
    prime_map['n']= 43;
    prime_map['o']= 47;
    prime_map['p']= 53;
    prime_map['q']= 59;
    prime_map['r']= 61;
    prime_map['s']= 67;
    prime_map['t']= 71;
    prime_map['u']= 73;
    prime_map['v']= 79;
    prime_map['w']= 83;
    prime_map['x']= 89;
    prime_map['y']= 97;
    prime_map['z']= 101;
}

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    unordered_map<long, int> m;
    int n = s.size();
    int result = 0;
    long key = 0;
    const char* s_char = s.c_str();

    init_prime();

    for(int l = 1; l <= n; ++l) {
        for(int i = 0; i <= n - l; ++i) {
            int j = i + l - 1;
            key = 1;
            for(int k = i; k <= j; ++k) {
                key = (prime_map[s_char[k]] * key) % 1000000007;
            }
            m[key] += 1;
        }
    }
    for(auto pp : m) {
        int value = pp.second;
        if(value >= 2) result += (value*(value-1))/2;
    }

    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
