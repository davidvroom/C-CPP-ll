#include "main.ih"

int main()
{
    while (cin)
    {
        cout << "Please enter: value1 'operator' value2:\n";

        string lhs;
        double rhs;
        string op;

        cin >> lhs >> op >> rhs;

        Operations objLhs(lhs);
        Operations objRhs(rhs);


        if (op == "+")
            Operations result = objLhs + objRhs;
        if (op == "-")
            Operations result = objLhs - objRhs;
        if (op == "+=")


        cout << '\n' << result.value() << '\n';

    }
    double lhs;
    cout << "lhs ";
    cin >> lhs;
    Operations vall(lhs);

    string op;
    cout << "operation ";
    cin >> op;

    double rhs;
    cout << "rhs ";
    cin >> rhs;
    Operations valr(rhs);

    if (op == "+")
    {
        //cout << lhs+rhs;
        Operations result = valr + vall;
        cout << '\n' << result.value() << '\n';
    }

}
