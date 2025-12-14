#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
// Survey data
const int TOTAL_CUSTOMERS = 16500;
const double ENERGY_DRINK_PURCHASE_PCT = 15.0; // 15%
const double CITRUS_PREFERENCE_PCT = 58.0; // 58%
// Calculate number of customers who buy energy drinks
double energyDrinkBuyers = TOTAL_CUSTOMERS
* (ENERGY_DRINK_PURCHASE_PCT / 100.0);
// Calculate number who prefer citrus flavor
double citrusPreferers = energyDrinkBuyers
* (CITRUS_PREFERENCE_PCT / 100.0);
// Round to nearest whole number for realistic reporting
int energyDrinkBuyersRounded = static_cast<int>(energyDrinkBuyers
+ 0.5);
int citrusPreferersRounded = static_cast<int>(citrusPreferers
+ 0.5);
// Display results with professional formatting
cout << "=== Energy Drink Survey Results ===" << endl;
cout << "Total customers surveyed: " << TOTAL_CUSTOMERS << endl;
cout << string(50, '-') << endl;
cout << left << setw(45)
<< "Customers buying 1+ energy drinks per week:"
<< right << setw(6) << energyDrinkBuyersRounded << " ("
<< fixed << setprecision(1) << ENERGY_DRINK_PURCHASE_PCT
<< "%)" << endl;
cout << left << setw(45)
<< "Of those, prefer citrus-flavored drinks:"
<< right << setw(6) << citrusPreferersRounded << " ("
<< setprecision(1) << CITRUS_PREFERENCE_PCT << "%)" << endl;
cout << string(50, '-') << endl;
cout << "Calculations:" << endl;
cout << " Energy drink buyers = " << TOTAL_CUSTOMERS << " × "
<< ENERGY_DRINK_PURCHASE_PCT << "% = "
<< energyDrinkBuyersRounded << endl;
cout << " Citrus preferers = " << energyDrinkBuyersRounded
<< " × " << CITRUS_PREFERENCE_PCT << "% = "
<< citrusPreferersRounded << endl;
return 0;
}