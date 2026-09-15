# Credit Card Validation

This document outlines the solution structure, algorithmic logic, and potential edge cases for the credit card validation program.

## OOP Concepts Used

The current implementation of this program relies on **procedural programming** rather than Object-Oriented Programming (OOP). 
* **Lack of OOP Structures:** The solution utilizes standalone functions, global scope declarations, and standard primitive types instead of custom classes or objects.
* **Potential Refactoring:** To align with strict OOP paradigms, the utility functions (`isValid`, `sumOfDoubleEvenPlace`, etc.) could be encapsulated as member functions inside a `CreditCardValidator` class, with the credit card number treated as a private data member (encapsulation).

## Algorithm

The program implements **Luhn's Algorithm** (also known as the Mod 10 algorithm) to determine the validity of a credit card number. The main steps are executed as follows:

1. **Size and Prefix Verification:** 
   * The program checks if the total number of digits is between 13 and 16.
   * It verifies if the card begins with a valid card issuer prefix (4 for Visa, 5 for Mastercard, 37 for American Express, or 6 for Discover).
2. **Double Even Places:** 
   * Moving from right to left, every second digit is multiplied by 2.
   * If the resulting product is a double-digit number (greater than 9), its individual digits are added together (handled by `getDigit`).
   * All these processed values are added to a running sum.
3. **Sum Odd Places:** 
   * Moving from right to left, all digits in odd positions are added directly to a separate running sum.
4. **Final Modulo Check:** 
   * The sums from step 2 and step 3 are added together.
   * If the final total sum is divisible by 10 (`sum % 10 == 0`), the card is valid; otherwise, it is invalid.

## Possible Error Points

* **Integer Overflow:** The program uses `long long` to handle large credit card numbers. However, entering a value exceeding the maximum limits of a 64-bit integer will cause an overflow error and result in undefined behavior.
* **Non-Numeric Input:** If a user inputs spaces, hyphens, or alphabetic characters (e.g., `4111-2222-3333-4444`), the standard input stream (`cin`) will fail, leading to an infinite loop or an incorrect evaluation of `0`.
* **Negative Numbers:** The mathematical digit-stripping logic (`number /= 10` and `number % 10`) behaves differently with negative integers, which would break the algorithm if a user types a minus sign.
