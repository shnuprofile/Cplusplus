#ifndef DISPLAY_H
#define DISPLAY_H

class Display {
public:
	Display();

	void displayDataScreen() const;

	void displayDataScreen(double t_initialInvestmentInput, double t_monthlyDepositInput,
		double t_annualInterestInput, int t_numYearsInput) const;

	void displayInputScreen();

	bool calculateAnother();

	double getInitialInvestment() const { return m_initialInvestmentInput; }
	double getMonthlyDeposit() const { return m_monthlyDepositInput; }
	double getAnnualInterest() const { return m_annualInterestInput; }
	int getNumYears() const { return m_numYearsInput; }

private:
	double m_initialInvestmentInput;
	double m_monthlyDepositInput;
	double m_annualInterestInput;
	int m_numYearsInput;

};

#endif
