#include <iostream>
#include <stack> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    const int n = 6;
    stack<int> Stack;
    int mas[n][n] = {
        {0, 1, 0, 0, 0, 1},
        {1, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 1}
    };
    int tops[n];
    for (int i = 0; i < n; i++)
        tops[i] = 0;
    Stack.push(0);
    cout << "Îáõ³ä ãðàôà: " << endl;
    while (!Stack.empty())
    {
        int top = Stack.top();
        Stack.pop();
        if (tops[top] == 2) continue;
        tops[top] = 2;
        for (int j = n - 1; j >= 0; j--)
        {
            if (tops[j] == 0)
            {
                Stack.push(j);
                tops[j] = 1;
            }
        }
        cout << top + 1 << endl;
    }
    system("pause");
    return 0;
}
