#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int countVowels(const std::string& text) {
    int vowelCount = 0;
    const std::string vowels = "aeiouAEIOU";
    for (char c : text) {
        if (vowels.find(c) != std::string::npos) {
            vowelCount++;
        }
    }
    return vowelCount;
}

int countWords(const std::string& text) {
    int wordCount = 0;
    std::istringstream iss(text);
    std::string word;
    while (iss >> word) {
        wordCount++;
    }
    return wordCount;
}

std::string reverseText(const std::string& text) {
    std::string reversedText = text;
    std::reverse(reversedText.begin(), reversedText.end());
    return reversedText;
}

std::string capitalizeSecondLetter(const std::string& text) {
    std::string result = text;
    bool capitalize = true;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}

int main() {
    std::ifstream file("file.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData);

    // Count vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    // Count words
    int wordCount = countWords(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    // Reverse the text
    std::string reversedText = reverseText(fileData);
    std::cout << "Reversed statement: " << reversedText << std::endl;

    // Capitalize the second letter of each word
    std::string capitalizedText = capitalizeSecondLetter(fileData);
    std::cout << "Statement with second letter capitalized: " << capitalizedText << std::endl;

    file.close();
    return 0;
}




