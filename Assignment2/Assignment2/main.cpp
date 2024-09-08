#include <iostream>

int main()
{
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;
    double totalSales = 95000;
    
    double stateTax = totalSales * stateTaxRate;
    double countyTax = totalSales * countyTaxRate;
    
    double totalTax = stateTax + countyTax;
    double totalPayment = totalSales + totalTax;
    
    std::cout<<"Total Sales: "<< totalSales<<"\n";
    std::cout<<"State Tax: "<<stateTax<<"\n";
    std::cout<<"County Tax: "<<countyTax<<"\n";
    std::cout<<"Total Tax: "<<totalTax<<"\n";
    
    return 0;
}

//Imagine you have a store and you have made $95,000 now as part of your tax return, you have to pay state and county tax at different rates. So estate tax is 4% whereas county tax is 2% now I want you to write code to show your total sales as well as your estate tax, your county tax and the total tax you have to pay on this income.

