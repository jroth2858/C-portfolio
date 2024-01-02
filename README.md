# Advanced C Programming Course Code
Code for Udemy [Advanced C Programming Course](https://www.udemy.com/course/advanced-c-programming-course/).
Credit: [Jason Fedlin](https://www.udemy.com/course/advanced-c-programming-course/#instructor-2)

This course is broken into several sections each with a specific focus. Each folder in the `challenges` directory contains my own implementation of the instructor-prescribed "challenges" for each of the course sections. The section numbers in this repository do not necessarily correspond with the course sections since the course has many introductory sections that do not have challenges. Additionally, some liberty is taken in certain challenges in order to better demonstrate certain tasks.

Challenges can be run and compiled with `Make` via `make -s section <X>` where `<X>` is the section number. Each sub challenge will be run in that sections directory. Note that the option `-s` is provided to silently run `make` and provides a cleaner output.

## Section 1
This section covers storage classes and namespaces. Understanding of the majority of different commonly used storage classes is demonstrated.

## Section 2 
This section covers less common datatypes such as:
- Variable length arrays,
- Flexible array members, and
- complex numbers.

## Section 3
This section covers type qualifiers. Specifically, 
- `const`,
- `volatile`, and
- `restrict`.
Due to challenges with ubiquitously demonstrating `volatile` and `restrict` dummy code is provided to discuss their usage, but the code is not executed.

## Section 4
This section covers bitwise operations.
- Challenge 1 demonstrates bit operations on several values and data types.
- Challenge 2 demonstrates bit packing in a structure for efficient memory use.