#ifndef STATICREPORT_H
#define STATICREPORT_H

/**
 * @brief Class to calculate investment growth with and without monthly deposits
 *
 * This class provides methods to calculate and display year-end balances and earned interest
 * based on compound interest formulas.
 */
class StaticReport {
public:
    /**
     * @brief Construct a new Static Report object
     *
     * @param t_initialInvestment Initial investment amount
     * @param t_monthlyDeposit Monthly deposit amount
     * @param t_annualInterest Annual interest rate (percentage)
     * @param t_numYears Number of years to invest
     */
    StaticReport(double t_initialInvestment, double t_monthlyDeposit,
        double t_annualInterest, int t_numYears);

    /**
     * @brief Display year-end balance and interest without monthly deposits
     */
    void displayWithoutMonthlyDeposits() const;

    /**
     * @brief Display year-end balance and interest with monthly deposits
     */
    void displayWithMonthlyDeposits() const;

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numYears;
};

#endif