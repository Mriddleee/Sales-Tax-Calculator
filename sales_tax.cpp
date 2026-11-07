#include "sales_tax.h"
#include <cmath>

namespace
{
    const double SALES_TAX_RATE = 0.06;

    double round_to_cents(double amount)
    {
        return std::round(amount * 100.0) / 100.0;
    }
}

double calculate_tax(double item_total)
{
    return round_to_cents(item_total * SALES_TAX_RATE);
}

double calculate_total_after_tax(double item_total)
{
    return round_to_cents(item_total + calculate_tax(item_total));
}
