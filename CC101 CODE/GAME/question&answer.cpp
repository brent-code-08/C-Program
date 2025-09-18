#include <iostream>
#include <string>
#include <vector>
#include <cctype>

struct Question {
    std::string prompt;
    std::string answer;
};

bool caseInsensitiveCompare(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) != tolower(b[i])) return false;
    }
    return true;
}

int main() {
    std::vector<Question> questions = {
        {"1. Whats is 10 * 10 ", "100"},
        {"2. Whats is brain of computer? ", "CPU"},
        {"3. What are the two main parts of the computer? ", "Hardware and Software"},
        {"4. What does the CPU stand for? ", "Central Processing Unit"}
        
    };

    std::string playAgain;

    do {
        int score = 0;
        std::string userAnswer;

        for (const auto& q : questions) {
            std::cout << q.prompt;
            std::getline(std::cin, userAnswer);

            if (caseInsensitiveCompare(userAnswer, q.answer)) {
                std::cout << "Correct!" << std::endl;
                ++score;
            } else {
                std::cout << "Incorrect. The correct answer is " << q.answer << "." << std::endl;
            }
        }

        std::cout << "You got " << score << " out of " << questions.size() << " correct." << std::endl;

        std::cout << "\nDo you want to try again? (yes/no): ";
        std::getline(std::cin, playAgain);

    } while (playAgain == "y" || playAgain == "Y");

    std::cout << "\nThanks for playing!" << std::endl;

    return 0;
}
