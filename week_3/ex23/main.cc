#include "main.ih"

int main()
{
    double val1;
    double val2;
    double val3;

    char op1;
    char op2;

    Operations result;

    cout << "\nPlease give something in the form: val1 +/- val2 +/- val3 +/-\n";

    while (cin >> val1 >> op1 >> val2 >> op2 >> val3)
    {
        Operations obj1{val1};
        Operations obj2{val2};
        Operations obj3{val3};

        if (op1 == '+' and op2 == '+')
            result = obj1 + obj2 + obj3;

        if (op1 == '-' and op2 == '-')
            result = obj1 - obj2 - obj3;

        if (op1 == '+' and op2 == '-')
            result = obj1 + obj2 - obj3;

        if (op1 == '-' and op2 == '+')
            result = obj1 - obj2 + obj3;

        cout << "\nResult: " << result.value() << '\n';
        cout << "\nPlease give something in the form: "
                "val1 +/- val2 +/- val3 +/-\n";
    }
}
