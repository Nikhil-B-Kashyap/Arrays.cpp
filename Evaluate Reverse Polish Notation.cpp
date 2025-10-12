/*Evaluate Reverse Polish Notation
Solved 
You are given an array of strings tokens that represents a valid arithmetic expression in Reverse Polish Notation.

Return the integer that represents the evaluation of the expression.

The operands may be integers or the results of other operations.
The operators include '+', '-', '*', and '/'.
Assume that division between integers always truncates toward zero.
Example 1:

Input: tokens = ["1","2","+","3","*","4","-"]

Output: 5

Explanation: ((1 + 2) * 3) - 4 = 5 */

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        while (tokens.size() > 1) {
            for (int i = 0; i < tokens.size(); i++) 
            {
                if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") 
                {
                    int a= stoi(tokens[i - 2]);
                    int b= stoi(tokens[i - 1]);
                    int result = 0;
                    if (tokens[i] == "+")
                        result = a + b;
                    else if (tokens[i] == "-")
                        result = a - b;
                    else if (tokens[i] == "*")
                        result = a * b;
                    else if (tokens[i] == "/")
                        result = a / b;

                    vector<string> newTokens;
                    
                    for (int j = 0; j < i - 2; ++j)
                        newTokens.push_back(tokens[j]);
                    
                    newTokens.push_back(to_string(result));
                    
                    for (int j = i + 1; j < tokens.size(); ++j)
                        newTokens.push_back(tokens[j]);
                    
                    tokens = newTokens;
                    break;
                }
            }
        }
        return stoi(tokens[0]);
    }
};