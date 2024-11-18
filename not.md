learn Orthodox Canonical Form
https://medium.com/@cantasar/fixed-floating-point-numbers-a6bcc64309ab

Const-Correctness:

The const qualifier ensures that the function does not modify the objects passed to it. This is important for maintaining const-correctness in your code, which helps prevent accidental modifications and makes the code easier to understand and maintain.
Function Overloading:

By providing both const and non-const versions of the function, you allow the function to be used in more contexts. For example, the const version can be called on const objects, while the non-const version can be called on non-const objects.
Code Safety:

The const version guarantees that the objects passed to it will not be modified, which can help prevent bugs and unintended side effects.
API Design:

Providing both const and non-const versions of the function gives users of your class more flexibility and ensures that the class can be used in a wider range of scenarios.