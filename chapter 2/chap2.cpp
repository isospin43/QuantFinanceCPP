/*

Header files: contain function declarations aka function prototypes and their data
Code file file contains actual definition of the function with data initalised from header files.

The header file contains the declarations of all functions and data. The individal function "signature" will consist of

- function name
- return type
- input arguments/parameters

If we wish to get the maximum or minimum of two or more integers, we will need to define function prototypes
This will be useful when defining payoff functions for one and two factor options.

We shall create two files:
Inequalities.hpp (function declarations)
Inequalities.cpp (function code)

TestInequalities.cpp:18:11: warning: result of comparison against a string literal is unspecified (use an explicit string comparison function instead) [-Wstring-compare]
    if (c == "a")
          ^  ~~~
1 warning generated.
Undefined symbols for architecture arm64:
  "Max(double, double)", referenced from:
      _main in TestInequalities-a89c21.o
  "Max(double, double, double)", referenced from:
      _main in TestInequalities-a89c21.o
  "Min(double, double)", referenced from:
      _main in TestInequalities-a89c21.o
  "Min(double, double, double)", referenced from:
      _main in TestInequalities-a89c21.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
steve@steves-Mac-mini chap2 % 



Instructions to run code:

steve@steves-Mac-mini chap2 % make
g++ -Wall -c TestInequalities.cpp -o TestInequalities.o
TestInequalities.cpp:18:11: warning: result of comparison against a string literal is unspecified (use an explicit string comparison function instead) [-Wstring-compare]
    if (c == "a")
          ^  ~~~
TestInequalities.cpp:16:12: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
    cin >> c;
           ^
TestInequalities.cpp:14:12: note: initialize the variable 'c' to silence this warning
    char* c;
           ^
            = NULL
2 warnings generated.
g++ -Wall -c Inequalities.cpp -o Inequalities.o
g++ -Wall TestInequalities.o Inequalities.o -o myprogram
steve@steves-Mac-mini chap2 % ls
Inequalities.cpp	Inequalities.o		TestInequalities.o	makefile
Inequalities.hpp	TestInequalities.cpp	chap2.cpp		myprogram
steve@steves-Mac-mini chap2 % ./myprogram 



*/