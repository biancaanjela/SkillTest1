//This program is built to calculate the income before and after tax, money spent on clothes, school supplies and savings bonds bought by you and your parents.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double PayRate, GrossIncome, NetIncome, SchoolSuppliesAmount, BondsAmount;
	double AmountSpentOnClothes, BondsByParents, HoursOfWork;
	    
	const double TAX_RATE = 0.14;
 	const double PERCENTAGE_SPENT_ON_CLOTHES = 0.10;
 	const double PERCENTAGE_SPENT_ON_SCHOOLSUPPLIES = 0.01;
    const double PERCENTAGE_SPENT_ON_SAVINGSBONDS = 0.25;
    const double PERCENTAGE_ON_SAVINGSBOND_BY_PARENTS = 0.50;
    
    cout << "Hours of Work: ";
    cin >> HoursOfWork;
    
    cout << "Rate per Hour: $";
    cin >> PayRate;
    
    GrossIncome = HoursOfWork * PayRate;
    NetIncome = GrossIncome *= TAX_RATE;
    AmountSpentOnClothes = NetIncome * PERCENTAGE_SPENT_ON_CLOTHES;
    SchoolSuppliesAmount = NetIncome * PERCENTAGE_SPENT_ON_SCHOOLSUPPLIES;
    NetIncome -= (AmountSpentOnClothes + SchoolSuppliesAmount);
    BondsAmount = NetIncome * PERCENTAGE_SPENT_ON_SAVINGSBONDS;
    BondsByParents = BondsAmount * PERCENTAGE_ON_SAVINGSBOND_BY_PARENTS;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << GrossIncome << endl;
    cout << "Net Income: $" << NetIncome << endl;
    cout << "Clothes & Other accessories: $" << AmountSpentOnClothes << endl;
    cout << "School Supplies: $" << SchoolSuppliesAmount << endl;
    cout << "Savings Bonds: $" << BondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<BondsByParents << endl;
    
    
    return 0;
}
