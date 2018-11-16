// Author:  Ahmed Elsayed Ali
// Purpose: Recursive function.
// Program: calculate chocolate.
// Date:    N/A
// course: Programing II

#include <iostream>


/*Suppose we can buy chocolate bars from the vending machine for $1 each.
Inside every chocolate bar is a coupon. We can redeem 7 coupons for 1 chocolate
bar from the machine. We would like to know how many chocolate bars
can be eaten, including those redeemed via coupon, if we have n dollars.
For example, if we have $20, then we can initially buy 20 chocolate bars.
This gives us 20 coupons. We can redeem 14 coupons for 2 additional
chocolate bars. These two additional chocolate bars have 2 more coupons,

so we now have a total of 8 coupons when added to the 6 left over from
the original purchase. This gives us enough to redeem for 1 final chocolate
bar. As a result we now have 23 chocolate bars and 2 leftover coupons.
Write a recursive solution to this problem that inputs from the user
the number of dollars to spend on chocolate bars and outputs how
many chocolate bars you can collect after spending all your money and
redeeming as many coupons as possible. Your recursive function will be
based upon the number of coupons owned.*/

using namespace std;

int nChocolate_Bars = 0;
int coupons = 0;

int ChocolateBars(int nDollars ) // money, B is coupons
{
    if (nDollars != 0 )
    {
        coupons = nDollars; // For every one dollars we can buy chocolate bars from the vending machine and every bar one coupons.
    }

    if (coupons >= 7)
    {
        nChocolate_Bars += nDollars + (coupons / 7);
        coupons = (coupons / 7) + (coupons % 7);
        nDollars = 0; // Money will be zero because don't affect on nchocolate_bars.
        ChocolateBars(nDollars);
    }

    return nChocolate_Bars;


}

int main()
{
    int n;
    cout << "Please enter the number of dollars: $";
    cin >> n;
    cout << "You can collect" <<" "<<ChocolateBars(n) <<" "<<"Chocolate bars." << endl;

    return 0;
}
