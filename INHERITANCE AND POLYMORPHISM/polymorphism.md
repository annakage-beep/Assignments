ANNA KAGEMULO MTABAZI
25/T/08565/PS

Take-Home Assignment: Polymorphism in C++
1. Introduction
To demonstrate runtime polymorphism in C++ using a virtual function and a base-class pointer plus overriding meber functions.

2. Class Structure
- Class A: The parent class containing the virtual function displayRole() to display the person's name.
- Class B: Inherits from Class A and overrides displayRole() to display the year of study.
- Class C: Inherits from Class A and overrides displayRole() to display the course of study.

             OUTPUT OF THE CODE
            My name is Anna Kagemulo.
            I am in year 2.
            I study Electrical Engineering.

3. Explanation of the program
- Class A: The parent class. It contans the virtual function displayRole().
- Class B: Inherits from A and overrides displayRole() to display that I am in Year 2.
- Class C: Also inherits from A and overrides displayRole() to display that I study Electrical Engineering.
- Base-class pointer ptr: It is declared as A*, but it can point to an object of A, B, or C.
- Runtime polymorphism: The same call, ptr->displayRole(), produces different output depending on the object that ptr points to. This works because displayRole() is declared virtual in class A.

4. Illustration of the polymorphism code
![alt text](<IMAGE 2.jpeg>)

5. Acknowledgement of AI Assistance
- I used ChatGPT (AI) to assist me in understanding the concept of polymorphism as a learning resource to improve my understanding of C++ programming.