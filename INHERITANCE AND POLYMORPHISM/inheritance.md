ANNA KAGEMULO MTABAZI
25/T/08565/PS
Take-Home Assignment: Chained (Multilevel) Inheritance
1. Introduction
Chained inheritance, also called multilevel inheritance, occurs when one class inherits from another class, and a third class inherits from the second class.

This program uses three classes to collect a person's details, student information, and course.
2. Class Structure
- Class A: Collects the person's name and age.
- Class B: Inherits from Class A and collects the student number and year of study.
- Class C: Inherits from Class B and collects the course name.

SAMPLE OUTPUT
Enter name: Anna
Enter age: 21
Enter student number: 24U1234
Enter year of study: 2
Enter course: Electrical Engineering

--- Student Information ---
Name: Anna
Age: 21
Student Number: 24U1234
Year of Study: 2
Course: Electrical Engineering

3. Explanation of the Program
- Class A: This is the base class. It collects and displays the person's name and age.
- Class B: This inherits publicly from Class A using class B : public A. It also collects and displays the student number and year of study.
- Class C: This inherits publicly from Class B using class C : public B. It collects and displays the course name.
In main(), we create an object called obj of Class C.

The object can call all six functions because of multilevel inheritance:
- obj.getPersonInfo(); — collects the person's name and age.
- obj.getStudentInfo(); — collects the student number and year of study.
- obj.getCourseInfo(); — collects the course name.
- obj.displayPersonInfo(); — displays the person's name and age.
- obj.displayStudentInfo(); — displays the student information.
- obj.displayCourseInfo(); — displays the course name.

4. Illustration of the inheritance
![alt text](<IMAGE 1.jpeg>)

5. Acknowledgement of AI Assistance
- I used ChatGPT (AI) to assist me in understanding the concept of chained inheritance as a learning resource to improve my understanding of C++ programming.