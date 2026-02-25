#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

// Function to read scores into array
void readScores(int scores[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
}

// Function to compute average
double computeAverage(const int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (double)sum / n;
}

// Function to analyze results
void analyzeResults(const int scores[], int n,
                    int &minScore, int &maxScore,
                    int &passed, int &failed) {

    minScore = scores[0];
    maxScore = scores[0];
    passed = 0;
    failed = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];

        if (scores[i] >= 50) passed++;
        else failed++;
    }
}

int main() {
    int n;
    cin >> n;

    int scores[MAX_STUDENTS];

    readScores(scores, n);

    double average = computeAverage(scores, n);

    int minScore, maxScore, passed, failed;
    analyzeResults(scores, n, minScore, maxScore, passed, failed);

    cout << "Average score: " << average << endl;
    cout << "Maximum score: " << maxScore << endl;
    cout << "Minimum score: " << minScore << endl;
    cout << "Number of passed students: " << passed << endl;
    cout << "Number of failed students: " << failed << endl;

    cout << "Scores above average: ";
    for (int i = 0; i < n; i++) {
        if (scores[i] > average) {
            cout << scores[i] << " ";
        }
    }
    cout << endl;

    return 0;
}