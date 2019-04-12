#ifndef MYCLASS_H
#define MYCLASS_H

// ifndef stands for "if not defined". The first pair of statements tells the program to define the MyClass header file if it has not been defined already.
// endif ends the condition.

class MyClass
{
    public:
        MyClass();
        ~MyClass();

        void myPrint();

    protected:

    private:
};

#endif // MYCLASS_H

// What is the purpose of #ifndef #define directives in header files?

// This prevents a header file from being included more than once within one file.
