// Accept runs for each ball in a cricket match and calculate total runs, boundaries, dot balls, strike rate, and wickets.
 // The program will also allow the user to run the calculation multiple times.

#include <iostream>
using namespace std;

int main()
{
    char choice;

    do
    {
        int n;
        cout << "----- Cricket Score Calculator -----" << endl;
        cout << "Enter number of overs: ";
        cin >> n;
        n *= 6; // Convert overs to balls
        cout << "Enter number of balls: ";
        cin >> n;

        int run;
        int totalRuns = 0;
        int boundaries = 0;
        int dotBalls = 0;
        int validBalls = 0;
        int wickets = 0;
        int noBalls = 0;

        cout << "Enter runs for each ball:\n";
        cout << "(Number of wickets)\n";
        cin >> wickets; // Input wickets

        for (int i = 1; i <= n; i++)
        {
            cout << "Ball " << i << ": ";
            cin >> run;

            if (run >= 0 && run <= 6)
            {
                totalRuns += run;
                validBalls++;

                if (run == 4 || run == 6)
                    boundaries++;

                if (run == 0)
                    dotBalls++;
            
            }
            else
            {
                cout << "Invalid ball ignored!" << endl;
            }
        }

        float strikeRate = 0;
        if (validBalls > 0)
            strikeRate = (float)(totalRuns * 100) / validBalls;

        cout << "\n----- Score Summary -----" << endl;
        cout << "Total Runs = " << totalRuns << endl;
        cout << "Boundaries = " << boundaries << endl;
        cout << "Dot Balls = " << dotBalls << endl;
        cout << "Strike Rate = " << strikeRate << endl;
        cout << "Wickets = " << wickets << endl;
        cout << "Valid Balls = " << validBalls << endl;
        cout << "Total Balls = " << n << endl;
        cout << "Overs = " << n / 6 << endl;

        cout << "\nDo you want to run again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program Ended!" << endl;

    return 0;
}
