class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int i = 0;
        while(i < tokens.size()){


            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                        st.push(stoi(tokens[i]));
                        }
            else{
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                switch(tokens[i][0]){
                    case '+': st.push(a+b); break;
                    case '-': st.push(a-b); break;
                    case '*': st.push(a*b); break;
                    case '/': st.push(a/b); break;
                }
            }
            i++;
        }

        return st.top();
    }
};

// if (tokens[i] == "+") {
//     st.push(a + b);
// }
// else if (tokens[i] == "-") {
//     st.push(a - b);
// }
// else if (tokens[i] == "*") {
//     st.push(a * b);
// }
// else if (tokens[i] == "/") {
//     st.push(a / b);
// }