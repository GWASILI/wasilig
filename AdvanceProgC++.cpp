#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For std::tolower
using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' ||
            tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (isspace(ch)) {
            capitalize = true;
        } else if (capitalize) {
            ch = toupper(ch);
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("textfile.txt");
    string fileData;
    if (!inputFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    getline(inputFile, fileData);
    inputFile.close();

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    cout << "Reversed statement: " << reverse(fileData) << endl;
    cout << "Statement with second letter of each word capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
