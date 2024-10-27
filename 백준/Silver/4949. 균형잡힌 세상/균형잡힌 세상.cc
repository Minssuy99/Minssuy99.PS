#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string input;

        getline(cin, input); // input 입력받기

        if (input == ".") // '.' 이 입력되면 종료
        {
            break;
        }

        stack<char> sentence; // char 문자를 담는 stack 선언
        bool isTrue = true;   // 검증

        for (char c : input)    // input 의 요소를 돌면서 char c 에 대입한다.
        {
            if (c == '(' || c == '[')   // c 가 만약 '(' 이거나 '[' 라면
            {
                sentence.push(c);       // c 에 할당된 문자를 stack 에 push
            }
            else if (c == ')' || c == ']')  // 만약 ')' 이거나 ']' 라면 
            {
                if (sentence.empty())   // stack 이 비어있다? -> 균형이 아니므로 종료.
                {
                    isTrue = false;
                    break;
                }

                char top = sentence.top();
                if ((top == '(' && c == ')') || (top == '[' && c == ']'))   // 만약 sentence.top 이 '(' 이고, c가 ) 라면 pop. '[' 이고 ']' 이면 pop.
                {
                    sentence.pop();
                }
                else    // 그게 아니라면 균형이 아니므로 종료.
                {
                    isTrue = false;
                    break;
                }
            }
        }

        if (isTrue && sentence.empty()) // isTrue 가 True 이면서 stack 이 비어있다면 yes
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
