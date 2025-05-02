Collecting workspace information# CPP Module 05: Exception Handling

This module focuses on exception handling in C++ through a series of exercises that build upon each other to create a bureaucratic system. Here's an explanation of each exercise:

## Exercise 00: Bureaucrat Class

This exercise introduces you to exception handling by implementing a `Bureaucrat` class:

- **Attributes**:
  - A constant name
  - A grade between 1 (highest) and 150 (lowest)

- **Key functionality**:
  - Exception handling for invalid grades (`GradeTooHighException` and `GradeTooLowException`)
  - Increment/decrement methods for changing grade with proper exception handling
  - Getters for name and grade
  - Overloaded insertion operator to display bureaucrat information

This forms the foundation for the bureaucratic system, where grade 1 represents the highest authority and 150 the lowest.

## Exercise 01: Form Class

Building on Ex00, this exercise adds forms that bureaucrats can interact with:

- **Attributes**:
  - A constant name
  - A signed status (initially false)
  - A constant grade required for signing
  - A constant grade required for execution

- **Key functionality**:
  - `beSigned()` method that checks if a bureaucrat has high enough grade to sign
  - `signForm()` method added to `Bureaucrat` to attempt signing
  - Similar exception handling to the previous exercise

## Exercise 02: Concrete Form Types

This exercise expands on the form system:

- The base form class becomes an abstract class (`AForm`)
- Three concrete form types are added:
  1. **ShrubberyCreationForm**: Creates a file with ASCII trees (sign: 145, exec: 137)
  2. **RobotomyRequestForm**: Attempts robotomization with 50% success rate (sign: 72, exec: 45)
  3. **PresidentialPardonForm**: Grants a presidential pardon (sign: 25, exec: 5)

- **Key functionality**:
  - `execute()` method in base class and implementations in concrete classes
  - `executeForm()` added to `Bureaucrat` to attempt executing forms
  - Checks that form is signed and bureaucrat has sufficient grade

The implementation in the ShrubberyCreationForm.cpp shows how it creates ASCII art trees in a target file.

## Exercise 03: Intern Class

The final exercise introduces a factory pattern:

- **Intern class**: Creates forms based on form name and target
  - No name, grade, or unique characteristics
  - `makeForm()` function that returns appropriate form object based on name
  - Error handling for non-existent form types
  - Simplified form creation process

This completes the bureaucratic system with a way to automatically create the right type of form without direct instantiation.

Each exercise must follow proper C++ practices like Orthodox Canonical Form and adhere to the C++98 standard with appropriate error handling.





# Differences Between Form and AForm

You're right about the main change - Form became an abstract class and was renamed to AForm. Here are the key differences:

## 1. Abstract vs Concrete
- **Form**: Concrete class that can be instantiated
- **AForm**: Abstract class (note the pure virtual function with `= 0`)

## 2. Access Modifiers
- **Form**: Attributes are `private`
- **AForm**: Attributes are `protected` (allows derived classes to access them)

## 3. Virtual Functions
- **AForm** added `virtual` to methods to support polymorphism
- Added pure virtual method: `execute(Bureaucrat const &executor) const = 0`

## 4. Exception Handling
- **AForm** adds an additional exception class: `FormNotSigned`

## 5. Inheritance Support
- **AForm** is designed to be a base class for the concrete form types (ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm)
- The `virtual` methods allow derived classes to override functionality
- `protected` attributes allow derived classes to access the base class data

This change follows the exercise requirements to make Form an abstract base class that concrete form types will inherit from. The 'A' prefix is a common naming convention to indicate "Abstract".