
#include <iostream>
#include <iomanip>
#include "console.h"
#include "sales_tax.h"

using namespace std;

int main()
{
    cout << "Sales Tax Calculator\n";

    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        double item_cost = 0.0;
        double total = 0.0;

        cout << "\nENTER ITEMS (ENTER 0 TO END)\n";

        while (true)
        {
            item_cost = console::get_double("Cost of item: ", 0);

            if (item_cost == 0)
                break;

            total += item_cost;
        }

        cout << fixed << setprecision(2);

        cout << left << setw(18) << "Total:"
             << right << setw(10) << total << '\n';

        cout << left << setw(18) << "Sales tax:"
             << right << setw(10) << calculate_tax(total) << '\n';

        cout << left << setw(18) << "Total after tax:"
             << right << setw(10) << calculate_total_after_tax(total) << '\n';

        again = console::get_char("Again? (y/n): ", "yYnN");
    }

    cout << "\nProgressing Complete!!!\n";

    return 0;
}
