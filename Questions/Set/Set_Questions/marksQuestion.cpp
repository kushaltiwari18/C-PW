// Given the number of questions as n, and marks for the correct answere as p and q marks for the incorrect answere. One can either attempt  to solve the question in an examination and get either p marks if the answere is right, or q marks if the answere is wrong, or have unattened and get 0 marks. . the task is to find the count of all the different possible marks that one can score in examination.
// i/p : n = 5, p = 1, q = -1

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n, p, q;
    cout << "Enter Number Of Questions : " << endl;
    cin >> n;
    cout << "Enter Marks For Correct Answere : " << endl;
    cin >> p;
    cout << "Enter Marks For Incorrect Answere : " << endl;
    cin >> q;

    unordered_set<int> s;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            int correct = i;
            int incorrect = j;
            int unattempted = n - (correct + incorrect);
            if (unattempted >= 0)
            {
                int marks = correct * p + incorrect * q;
                s.insert(marks);
            }
            else
            {
                break;
            }
        }
    }

    for (auto score : s)
    {
        cout << score << " ";
    }
    cout << endl;
    cout << "Ans : " << s.size() << endl;
    return 0;
}