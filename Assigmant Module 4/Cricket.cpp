#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string playerName;
    int matchesPlayed;

public:
    void inputData() {
        cout << "Enter player name: ";
        cin.ignore();  // To consume the newline character left in the buffer
        getline(cin, playerName);

        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputData(); // Call the base class function to input common data

        cout << "Enter total runs scored: ";
        cin >> totalRuns;

        cout << "Enter best performance (highest score in a single match): ";
        cin >> bestPerformance;

        calculateAverageRuns(); // Calculate average runs after inputting data
    }

    void calculateAverageRuns() {
        if (matchesPlayed != 0) {
            averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
        } else {
            averageRuns = 0.0;
        }
    }

    void displayData() {
        cout << "\nBatsman Details:" << endl;
        cout << "Player Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs Scored: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.displayData();
}
