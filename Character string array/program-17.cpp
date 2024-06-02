#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int findmindiff(vector<string> timepoints)
{
    // step1: convert time string into minutes integer value
    vector<int> minutes;
    for (int i = 0; i < timepoints.size(); i++)
    {
        string current = timepoints[i];

        // stoi function is used to convert string into integer
        int hours = stoi(current.substr(0, 2));
        int min = stoi(current.substr(3, 2));
        int totalmin = hours * 60 + min;
        minutes.push_back(totalmin);
    }

    // step2: sort
    sort(minutes.begin(), minutes.end());

    // step3: difference and calculate min diff

    int mini = INT16_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // step4: last condition

    int lastdiff = (minutes[0] + 1440) - minutes[n - 1];
    mini = min(mini, lastdiff);
    return mini;
}

int main()
{
    vector<string> timepoints = {"23:59", "00:00"};
    cout << findmindiff(timepoints);
}