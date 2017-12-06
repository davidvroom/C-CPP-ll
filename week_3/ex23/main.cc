#include "main.ih"

int main()
{
    double lhs;
    cout << "lhs ";
    cin >> lhs;
    Operations vall(lhs);

    char op;
    cout << "operation ";
    cin >> op;

    double rhs;
    cout << "rhs ";
    cin >> rhs;
    Operations valr(rhs);

    if (op == '+'){
        //cout << lhs+rhs;
        Operations result = valr + vall;
        cout << '\n' << result.value() << '\n';
    }

}
