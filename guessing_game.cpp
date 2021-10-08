#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class guess
{
private:
    int random;

public:
    int guess_num;
    int ticket = 7;
    void prompt();
    void random_number();
    void check_num();
};

void guess ::random_number()
{
    srand(time(0));
    random = rand() % 100 + 1;
}

void guess ::prompt()
{
    cout << " you have total 7 chance to guess number " << endl;
}

void guess ::check_num()
{

    do
    {
        cout << "enter your guessed number " << endl;
        cin >> guess_num;

        if (guess_num > random)
        {
            cout << "your number is greater" << endl;
        }
        else if (guess_num < random)
        {
            cout << "your number is less " << endl;
        }
        else
        {
            cout << "you win" << endl;
            cout << "you win in " << ticket << " attempt" << endl;
            exit(0);
        }
        ticket--;
        cout << "you have only " << ticket << " chance left" << endl;
        cout << endl
             << endl;
    } while (ticket != 0);
}
int main()
{
    guess g;
    g.random_number();
    g.prompt();
    g.check_num();

    return 0;
}