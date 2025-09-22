#include <iostream>	
#include <stack>
using namespace std;

int main() {
    while (1) {  
        stack<int> st;
        string tmp; getline(cin, tmp);
        if (tmp == ".") return 0;
        int flag = 0;

        for (int i = 0; i < (int)tmp.size(); i++) {
            if (tmp[i] == '(') st.push('(');

            else if (tmp[i] == '[') st.push('[');
        
            else if (tmp[i] == ')') {
                if (st.empty() || st.top() != '(') {
                    flag = 1;
                    break;
                }
                else if (!st.empty() && st.top() == '(') st.pop();
            }

            else if (tmp[i] == ']') {
                if (st.empty() || st.top() != '[') {
                    flag = 1;
                    break;
                }
                else if (!st.empty() && st.top() == '[') st.pop();
            }
        }
        if (flag) printf("%s\n", "no");
        else if (st.size()) printf("%s\n", "no");
        else printf("%s\n", "yes");
    }
}