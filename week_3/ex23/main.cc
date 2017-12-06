#include "main.ih"

int main()
{
    double lhs;
    double rhs;
    double rrhs;

    string op;
    string op2;

    Operations result;

    if (cin >> lhs >> op >> rhs >> op2 >> rrhs)
    {
        Operations objLhs{ lhs };
        Operations objRhs{ rhs };

        if (op == "+" and op2 == "+")
        {
            result = objLhs + objRhs + Operations{ rrhs }; // operator+ 2
            cout << '\n' << result.value() << '\n';
        }


        //if (op == "+=")
         //   Operations{ lhs } += obj;

        //if (op == "-")
        //    result = Operations{ lhs } - Operations{ rhs };

    }

    if (cin >> op >> rhs)
    {
        if (op == "+")
            result += Operations{ rhs }; // operator+= 1


        //if (op == "-")
        //    result -= Operations{ lhs };

        cout << '\n' << result.value() << '\n';
    }

    string op3;
    double val2;
    if (cin >> op >> rhs >> op3 >> val2)
    {
        if (op == "+" and op3 == "+=")
            result += Operations{ rhs } += Operations{ val2 };

        cout << '\n' << result.value() << '\n';
    }



        //cout << '\n' << result.value() << '\n';

}
