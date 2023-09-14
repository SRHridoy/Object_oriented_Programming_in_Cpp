#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string text;
    
    // Prompt the user to enter text
    cout << "Enter some text (press Ctrl+D or Ctrl+Z followed by Enter to finish):\n";

    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    // Read and process input
    while (getline(cin, text)) {
        lineCount++; // Increment line count for each line of input

        // Count words and characters in the current line
        int lineWordCount = 0;
        int lineCharCount = 0;
        bool inWord = false;

        for (char c : text) {
            if (isspace(c)) {
                if (inWord) {
                    wordCount++;
                    lineWordCount++;
                    inWord = false;
                }
            } else {
                inWord = true;
                lineCharCount++;
                charCount++;
            }
        }

        // If there's at least one word in the line, increment word count for the line
        if (lineWordCount > 0) {
            wordCount++;
        }
    }

    // Display the results in two columns
    cout << left << setw(20) << "Number of Lines:" << right << setw(10) << lineCount << endl;
    cout << left << setw(20) << "Number of Words:" << right << setw(10) << wordCount << endl;
    cout << left << setw(20) << "Number of Characters:" << right << setw(10) << charCount << endl;

    return 0;
}
