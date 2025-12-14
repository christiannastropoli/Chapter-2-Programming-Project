include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  
// Car specifications
const double TANK_CAPACITY_GALLONS = 20.0;
const double TOWN_MPG = 23.5;
const double HIGHWAY_MPG = 28.9;
  
// Calculate maximum distance on one tank
double townDistance = TANK_CAPACITY_GALLONS * TOWN_MPG;
double highwayDistance = TANK_CAPACITY_GALLONS * HIGHWAY_MPG;
  
// Display results with professional formatting
cout << "=== Car Fuel Range Calculator ===" << endl;
cout << "Tank Capacity: " << fixed << setprecision(1)
<< TANK_CAPACITY_GALLONS << " gallons" << endl;
  
cout << string(40, '-') << endl;
cout << left << setw(20) << "Driving Condition"
<< setw(15) << "MPG"
<< setw(15) << "Max Distance" << endl;
cout << string(40, '-') << endl;
cout << left << setw(20) << "In Town"
<< setw(15) << setprecision(1) << TOWN_MPG
<< setw(15) << setprecision(1) << townDistance
<< "miles" << endl;
cout << left << setw(20) << "On Highway"
<< setw(15) << setprecision(1) << HIGHWAY_MPG
<< setw(15) << setprecision(1) << highwayDistance
<< "miles" << endl;
cout << string(40, '-') << endl;
cout << "Formula: Distance = Tank Capacity × MPG" << endl;
return 0;
}