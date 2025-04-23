#include "./Display.h"
#include <iostream>
#include <iomanip>

Display::Display() = default;

/**
 * @brief Determine the operating system
 *
 * This function determines the operating system for the
 * 'Press any key' functionality.
 *
 * @source:
 * https://stackoverflow.com/questions/1449324/how-to-simulate-press-any-key-to-continue
 * https://stackoverflow.com/questions/142508/how-do-i-check-os-with-a-preprocessor-directive
 *
 */
std::string getOs() {
#ifdef _WIN32
    return "Windows";
#else
    return "Other";
#endif
}

/**
 * @brief Display investment data input confirmation
 *
 * This function outputs the inital starting screen.
 *
 */
void Display::displayDataScreen() const {
    std::cout << "\x1B[32m\n********** Data Input **********\n";
    std::cout << "Initial Investment Amount:  " << "\n";
    std::cout << "Monthly Deposit:  " << "\n";
    std::cout << "Annual Interest:  " << "\n";
    std::cout << "Number of years:   " << "\n";

    // Run command based on operating system
    if (getOs() == "Windows") {
        system("pause");
    }
    else {
        system("read");
    }
}

/**
 * @brief Display investment data input confirmation
 *
 * This function outputs the user input data for review before calculating reports.
 *
 * @param t_initialInvestment Initial investment amount
 * @param t_monthlyDeposit Monthly deposit amount
 * @param t_annualInterest Annual interest rate
 * @param t_numYears Number of years for investment
 */
void Display::displayDataScreen(double t_initialInvestmentInput, double t_monthlyDepositInput,
    double t_annualInterestInput, int t_numYearsInput) const {
    std::cout << "\n********** Data Input **********\n";
    std::cout << "Initial Investment Amount:  $" << std::fixed << std::setprecision(2) << t_initialInvestmentInput << "\n";
    std::cout << "Monthly Deposit:  $" << std::fixed << std::setprecision(2) << t_monthlyDepositInput << "\n";
    std::cout << "Annual Interest:  %" << t_annualInterestInput << "\n";
    std::cout << "Number of years:   " << t_numYearsInput << "\n";

    // Run command based on operating system
    if (getOs() == "Windows") {
        system("pause");
    }
    else {
        system("read");
    }
}

void Display::displayInputScreen() {
    std::cout << "\nEnter Initial Investment Amount: $";
    std::cin >> m_initialInvestmentInput;

    std::cout << "Enter Monthly Deposit: $";
    std::cin >> m_monthlyDepositInput;

    std::cout << "Enter Annual Interest (%): ";
    std::cin >> m_annualInterestInput;

    std::cout << "Enter Number of Years: ";
    std::cin >> m_numYearsInput;
    std::cin.ignore();
}

bool Display::calculateAnother() {
    char choice;
    std::cout << "\nWould you like to do another calculation? [y/n] ";
    std::cin >> choice;
    if (tolower(choice) == 'y') {
        return true;
    }
    else {
        return false;
    }

}