/*
As part of Covid guidelines, the government requested all essential products' sellers to set up stalls in a central locality to make shopping easier for citizens. Accordingly N sellers setup their stalls, 
in a single row. During the inspection before opening the stalls for citizens, it was found that only some of the sellers were vaccinated (indicated by 1), while others weren't (indicated by 0). The site manager 
decided to move all vaccinated stalls to the left side and all the non-vaccinated stalls to the other side, so that more stringent safety guidelines can be applied to non-vaccinated stalls. Instructing all stall 
owners to move simultaneously would create chaos, so the manager instructed the owners to swap only vaccinated and unvaccinated stalls next to each other. One stall could be swapped only once per day.
The manager now wants to know how many days it would take to complete the set up of having all vaccinated stalls on left side and the non-vaccinated stalls on the right.
Complete the noOfDays Taken function which takes vacState as the input containing the vaccination status of all the stall owners and outputs the minimum number of days to complete the setup.
Constraints
1 < N < 500000

Input Format:
The first line has an integer, N, which is the total number of stalls. Next N lines of input contain either 1 (vaccinated) or 0(non-vaccinated).

Output Format:
The output contains the minimum number of days it will take to set up all of the vaccinated people's stalls the left side and all of the non-vaccinated people's stalls on the right.
*/
#include <iostream>
#include <vector>

using namespace std;

int noOfDaysTaken(vector<int> vacState) {
    int n = vacState.size();
    int days = 0;
    
    while (true) {
        bool swapped = false;

        for (int i = 0; i < n - 1; ++i) {
            if (vacState[i] == 0 && vacState[i + 1] == 1) {
                swap(vacState[i], vacState[i + 1]);
                swapped = true;
                i++; // Skip the next stall to avoid consecutive swaps
            }
        }

        if (!swapped) {
            break; // If no swaps occurred, exit the loop
        }

        days++;
    }

    return days;
}

int main() {
    int N;
    cin >> N;

    vector<int> vacState(N);
    for (int i = 0; i < N; ++i) {
        cin >> vacState[i];
    }

    int result = noOfDaysTaken(vacState);
    cout << result << endl;

    return 0;
}
