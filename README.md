# Cplusplus
## Project Summary
Airgead Banking App is an investment simulator designed to calculate and display investment growth with and without monthly deposits. The application allows users to input an initial investment amount, monthly deposit, annual interest rate, and number of years. It then calculates the year-end balance and earned interest based on both simple and compound interest methods. The goal of the project is to help users understand how their investments grow over time with different saving strategies.

## What Went Well
Modular Design: The project is organized into well-defined classes (e.g., StaticReport, Display), each handling specific responsibilities. This promotes a clean and maintainable structure.

User-Friendly Interface: The display functions provide clear prompts and output to guide users through the investment process, ensuring an intuitive experience.

Error Handling: The use of try-catch blocks ensures that any exceptions or runtime errors are caught and reported with meaningful messages.

## Areas for Improvement
Error Handling for User Input: While the program handles runtime exceptions, it could benefit from additional input validation. For instance, checking if the user inputs valid numeric values for the investment amount, interest rate, and number of years would prevent runtime errors from invalid input.

Code Efficiency:

The same system("pause") and system("read") calls are repeated in the display functions. A helper function for this could streamline the code and reduce duplication.

The calculation of monthly interest is done multiple times in StaticReport. Optimizing the structure of the loops to calculate the interest in fewer steps might improve performance.

Security: There is no direct concern for security in this project since it doesn't handle sensitive data. However, if this app were to be extended, input sanitization and encryption would become important to protect user data.

Expandability: The app currently handles simple investment scenarios, but future updates could include features like withdrawal tracking or variable interest rates. A more flexible architecture might be needed to accommodate these features without heavy modifications to the existing codebase.

## Challenges Faced and Solutions
Complex Interest Calculations: The most challenging part was correctly implementing the calculation of compounded interest with and without monthly deposits. After breaking down the problem into manageable steps and using loops to iterate through months and years, I was able to get the desired results.

OS-Specific Code: The need to pause execution based on the operating system (Windows vs. other) was tricky, especially when ensuring the code works seamlessly across platforms. I found resources online and tested the solution by checking the OS during runtime using preprocessor directives.

Handling Multiple Inputs: Ensuring that user input is correctly parsed and displayed was essential to providing a user-friendly experience. I overcame this by defining a clear flow for data input and display, ensuring that each step logically followed the previous one.

## Transferable Skills
Modular Programming: The design of separating logic into different classes (StaticReport, Display) is a transferable skill that will apply to future software development projects.

Complex Calculations and Loops: The use of loops and arithmetic operations to calculate interest and balances is a useful skill for handling financial calculations, simulations, or any scenario that requires iterative processing.

Input Validation and Error Handling: This experience will help in any future projects that involve user input, ensuring data is valid before being processed and handled gracefully.

## Maintainability, Readability, and Adaptability
Maintainability: The program's modular design, with clearly defined classes and functions, makes it easy to maintain and extend. Any future enhancements, such as adding new investment strategies or features, can be done by adding new classes or modifying existing ones without disrupting the core functionality.

Readability: The code is well-commented, which makes it easier to understand the purpose of each function and how the program flows. This is especially helpful for future developers or for revisiting the code after some time.

Adaptability: The separation of logic into different methods and classes makes it easy to adapt the application to new requirements. For example, adding a feature that simulates different interest rates for each year would be straightforward with minimal changes to the existing codebase.
