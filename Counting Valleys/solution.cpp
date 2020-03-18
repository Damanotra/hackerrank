#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    stack<char> stak;
    int numberValley;
    int length = s.length();
    for(int i=0;i<length;i++){
        if(stak.empty()){
            stak.push(s[i]);
        }
        else{
            if(stak.top()==s[i]){
                stak.push(s[i]);
            }
            else if(stak.size()==1 && stak.top()=='D'){
                numberValley++;
                stak.pop();
            }
            else{
                stak.pop();
            }
        }
    }
    return numberValley;
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
