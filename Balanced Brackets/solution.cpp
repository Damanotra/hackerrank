#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> stak;
    bool balanced = true;
    int length = s.size();
    for(int i=0;i<length;i++){
        if(s[i]=='}'){
            if(stak.empty()){
                balanced=false;
                break;
            }
            else if(stak.top()!='{'){
                balanced=false;
                break;
            }
            else{
                stak.pop();
            }
        }
        else if(s[i]==')'){
            if(stak.empty()){
                balanced=false;
                break;
            }
            else if(stak.top()!='('){
                balanced=false;
                break;
            }
            else{
                stak.pop();
            }
        }
        else if(s[i]==']'){
            if(stak.empty()){
                balanced=false;
                break;
            }
            else if(stak.top()!='['){
                balanced=false;
                break;
            }
            else{
                stak.pop();
            }
        }
        else{
            stak.push(s[i]);
        }
    }
    if(stak.size()==0 && balanced==true){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

