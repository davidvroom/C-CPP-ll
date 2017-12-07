#include "main.ih"

int main()
{
    double lhs;
    double rhs;
    double rrhs;

    char op;
    char op2;

    Operations result;

    while (cin >> lhs >> op >> rhs >> op2 >> rrhs)
    {
        cout << "\nPlease give something in the form: val1 +/- val2 +/- val3 +/-\n";

        Operations obj1{lhs};
        Operations obj2{rhs};
        Operations obj3{rrhs};

        if (op == '+' and op2 == '+')
            result = obj1 + obj2 + obj3; // operator+ 2

        if (op == '-' and op2 == '-')
            result = obj1 - obj2 - obj3; // operator+ 2

        if (op == '+' and op2 == '-')
            result = obj1 + obj2 - obj3; // operator+ 2

        if (op == '-' and op2 == '+')
            result = obj1 - obj2 + obj3; // operator+ 2

        cout << '\n' << result.value() << '\n';
    }
}
