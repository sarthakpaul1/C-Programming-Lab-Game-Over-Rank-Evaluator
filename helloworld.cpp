#include <iostream>
using namespace std;

int main()
{
    int score;


    cout << "Enter your score." << endl;
    cin >> score;
    

    if (score < 0)
    {
        cout << "Error: Invalid score." << endl;
    }
    else if (score >= 0 && score <= 499)
    {
        cout << "Rank: Rookie" << endl;
    }
    else if (score >= 500 && score <= 999)
    {
        cout << "Rank: Pro" << endl;
    }
    else if (score > 999)
    {
        cout << "Rank: Legend" << endl;
    }

}
