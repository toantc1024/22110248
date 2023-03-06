#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int getRandom ( int Min, int Max );

char ch;

int userMax = 0;

int main()
{
    srand( time ( NULL ) );

    int lotteryArray[ 6 ];

    cout << "Greetings user! What is the maximum possible number you would like for your lottery range? ";
    cin >> userMax;

    do
    {
        for ( int i = 0; i < 6; i++ )
        {
            lotteryArray[ i ] = getRandom( 1, 6 );
        }
        cout << "Here are your lottery numbers from 1 to " << userMax << "." << endl << endl;
        for ( int index = 0; index < 6; index++ )
        {
            cout << lotteryArray[ index ] << setw( 5 );
        }
        cout << endl << "Do you want to play again? Press 'Y' for Yes or any other letter to exit. ";
        cin >>  ch;
    }
    while( ch == 'Y' || ch == 'y' );

    return EXIT_SUCCESS;
}

int getRandom ( int Min, int Max )
{
    int number = rand() % userMax + 1;
    return number;
}
