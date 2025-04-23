/*
* Airgead Banking App
*
* Date: April 4 2025
* Author: Attila Bordan
*
*/

#include "StaticReport.h"
#include "Display.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>



/**
 * @brief Main function to run the Airgead Banking investment simulator
 */
int main() {
    try {
        Display display;
        bool doAnotherCalcualtion = true;

        display.displayDataScreen();
        while (doAnotherCalcualtion) {

            display.displayInputScreen();
            display.displayDataScreen(
                display.getInitialInvestment(),
                display.getMonthlyDeposit(),
                display.getAnnualInterest(),
                display.getNumYears()
            );

            StaticReport calculator(
                display.getInitialInvestment(),
                display.getMonthlyDeposit(),
                display.getAnnualInterest(),
                display.getNumYears()
            );

            calculator.displayWithoutMonthlyDeposits();
            calculator.displayWithMonthlyDeposits();
            if (!display.calculateAnother()) {
                doAnotherCalcualtion = false;
            }
        }
    }
    catch (const std::exception& except) {
        std::cerr << "Error: " << except.what() << "\n";
        return 1;
    }

    return 0;
}

