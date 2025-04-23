#include "./StaticReport.h"
#include <iostream>
#include <iomanip>

/**
 * @brief Construct a new Static Report object
 *
 * Initializes the static report with user input values.
 *
 * @param t_initialInvestment Initial investment amount
 * @param t_monthlyDeposit Monthly deposit amount
 * @param t_annualInterest Annual interest rate (percentage)
 * @param t_numYears Number of years to invest
 */
StaticReport::StaticReport(double t_initialInvestment, double t_monthlyDeposit,
    double t_annualInterest, int t_numYears)
    : m_initialInvestment(t_initialInvestment), m_monthlyDeposit(t_monthlyDeposit),
    m_annualInterest(t_annualInterest), m_numYears(t_numYears) {
}

/**
 * @brief Display investment report without monthly deposits
 *
 * Calculates and displays year-end balances and interest using only the initial investment,
 * with compound interest applied annually.
 */
void StaticReport::displayWithoutMonthlyDeposits() const {
    std::cout << "  Balance and Interest Without Additional Monthly Deposits\n";
    std::cout << "============================================================\n";
    std::cout << std::right << std::setw(10) << "Year"
        << std::setw(20) << "Year End Balance"
        << std::setw(28) << "Year End Earned Interest" << "\n";
    std::cout << "-----------------------------------------------------------\n";

    double yearEndBalance = m_initialInvestment;
    for (int year = 1; year <= m_numYears; ++year) {
        double yearlyInterest = yearEndBalance * (m_annualInterest / 100); // Interest calculated annually
        yearEndBalance += yearlyInterest;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(4) << std::right << year
            << std::setw(15) << std::right << "$" << yearEndBalance
            << std::setw(20) << std::right << "$" << yearlyInterest << "\n";
    }
}

/**
 * @brief Display investment report with monthly deposits
 *
 * Calculates and displays year-end balances and interest based on monthly deposits
 * and monthly compounding of interest.
 */
void StaticReport::displayWithMonthlyDeposits() const {
    std::cout << "\n     Balance and Interest With Additional Monthly Deposits\n";
    std::cout << "=============================================================\n";
    std::cout << std::right << std::setw(10) << "Year" 
        << std::setw(20) << "Year End Balance"
        << std::setw(28) << "Year End Earned Interest" << "\n";
    std::cout << "-------------------------------------------------------------\n";

    double balance = m_initialInvestment;
    for (int year = 1; year <= m_numYears; ++year) {
        double yearlyInterest = 0.0;
        for (int month = 0; month < 12; ++month) {
            balance += m_monthlyDeposit; // Monthly deposit added
            double interest = balance * ((m_annualInterest / 100) / 12); // Monthly interest calculated
            yearlyInterest += interest;
            balance += interest; // Interest compounded monthly
        }
        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(4) << std::right << year
            << std::setw(15) << std::right << "$" << balance
            << std::setw(20) << std::right << "$" << yearlyInterest << "\n";
    }
}