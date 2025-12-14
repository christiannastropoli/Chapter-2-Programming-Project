#include <iostream>
#include <iomanip>

using namespace std;

int main() {
// Current ocean rise rate: 1.5 mm per year
const double RISE_RATE_MM_PER_YEAR = 1.5;
// Years to project
const int YEAR_5 = 5;
const int YEAR_7 = 7;
const int YEAR_10 = 10;
// Calculate projected rise for each period
double riseIn5Years = RISE_RATE_MM_PER_YEAR * YEAR_5;
double riseIn7Years = RISE_RATE_MM_PER_YEAR * YEAR_7;
double riseIn10Years = RISE_RATE_MM_PER_YEAR * YEAR_10;
// Display header
cout << "Ocean Level Rise Projection" << endl;
cout << "Current rate: " << RISE_RATE_MM_PER_YEAR
<< " mm/year" << endl;
cout << string(50, '-') << endl;
// Set output formatting
cout << fixed << setprecision(1);
// Display results
cout << "In " << YEAR_5 << " years: " << riseIn5Years
<< " mm higher" << endl;
cout << "In " << YEAR_7 << " years: " << riseIn7Years
<< " mm higher" << endl;
cout << "In " << YEAR_10 << " years: " << riseIn10Years
<< " mm higher" << endl;
return 0;
}
