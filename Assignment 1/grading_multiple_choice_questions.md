# Grading Multiple Choice Questions Documentation

This document outlines the solution structure, algorithmic logic, and potential edge cases for the student multiple-choice exam grading program.

## OOP Concepts Used

The current implementation of this program relies on **procedural programming** rather than Object-Oriented Programming (OOP). 
* **Lack of OOP Structures:** The solution utilizes flat multidimensional arrays, localized primitive tracking variables, and procedural nested loops entirely within the `main()` function instead of defining objects.
* **Potential Refactoring:** To align with strict OOP paradigms, a `Student` class could be created to encapsulate individual student data (ID and raw answers) and a grading method. Additionally, a `Grader` or `Exam` class could hold the answer key and manage the overall grading process.

## Algorithm

The program grades a fixed set of student multiple-choice responses against a predefined answer key using a matrix-traversal algorithm. The main steps are executed as follows:

1. **Data Initialization:**
   * A 2D character array (`answers[8][10]`) stores the answers of 8 students across 10 distinct questions.
   * A 1D character array (`key[10]`) holds the correct answers for the 10 questions.
2. **Matrix Traversal (Nested Loops):**
   * **Outer Loop:** Iterates through each student from index `0` to `7`. For each student, a counter variable `correct` is initialized to `0`.
   * **Inner Loop:** Iterates through each question from index `0` to `9` for the current student.
3. **Comparison and Scoring:**
   * The program checks if the student's answer matches the corresponding answer key value: `answers[student][question] == key[question]`.
   * If a match is found, the `correct` counter is incremented by 1.
4. **Output Generation:**
   * After checking all 10 questions for a student, the program prints the student's index and their total number of correct answers to the console.

## Possible Error Points

* **Hardcoded Constraints:** The array sizes (8 students, 10 questions) are fixed and hardcoded into the array dimensions and loop boundaries. Adding more students or changing the number of questions requires refactoring the source code, making it inflexible to dynamic inputs.
* **Out-of-Bounds Memory Access:** If the loop conditions are accidentally altered (e.g., changing `question < 10` to `question <= 10`), the program will attempt to access memory outside the array boundaries, causing undefined behavior or segmentation faults.
* **Lack of Input Validation:** Since the datasets are entirely hardcoded into the source code, it assumes all data is perfectly clean. If this were adapted for user input, entering case-sensitive letters (e.g., lowercase 'a' instead of uppercase 'A') or invalid characters would result in grading errors without warning.
