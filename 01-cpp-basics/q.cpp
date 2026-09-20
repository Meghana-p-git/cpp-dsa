#include <iostream>
#include <string>

using namespace std;

void findFirstMatch(const string &text, const string &pattern) {
    // Case 1: If the pattern is longer than the text, print "Invalid input"
    if (pattern.length() > text.length()) {
        cout << "Invalid input" << endl;
        return;
    }

    int textLength = text.length();
    int patternLength = pattern.length();

    // Case 2: Check for exact match
    for (int i = 0; i <= textLength - patternLength; i++) {
        bool isExactMatch = true;
        for (int j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                isExactMatch = false;
                break;
            }
        }
        if (isExactMatch) {
            cout << i << endl;
            return;
        }
    }

    // Case 3: Check for closest match (one character mismatch allowed)
    int closestMatchIndex = -1;
    int minMismatch = patternLength + 1; // Set to a high value initially

    for (int i = 0; i <= textLength - patternLength; i++) {
        int mismatchCount = 0;

        for (int j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                mismatchCount++;
            }
        }

        if (mismatchCount == 1 && mismatchCount < minMismatch) {
            minMismatch = mismatchCount;
            closestMatchIndex = i;
        }
    }

    // Case 4: Print result
    if (closestMatchIndex != -1) {
        cout << closestMatchIndex << endl;
    } else {
        cout << "No match found" << endl;
    }
}

int main() {
    string text, pattern;

    // Read the text input
    getline(cin, text);

    // Read the pattern input
    getline(cin, pattern);

    // Call function to find first match
    findFirstMatch(text, pattern);

    return 0;
}

