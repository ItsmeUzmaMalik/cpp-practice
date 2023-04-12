#include <iostream>
using namespace std;

int main()
{
	int num_1;
	
    cout << "Enter number on the dice: ";
    cin >> num_1;

    if (num_1 == 2)
    {
        cout << "Game will continue...";
        return 0;
    }

 else if (num_1 <=3)
    {
        cout << "play again...";
      
    }

   else if (num_1 <= 6)
    {
        cout << "Game is Won";
      
    }

    else
        cout << "Game is Lost";

    return 0;
}
