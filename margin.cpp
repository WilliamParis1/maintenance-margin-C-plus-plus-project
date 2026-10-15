#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double equity = 8000.0;
    double maintenanceMargin = 10000.0;
    double warningLevel = 12000.0;

    cout << fixed << setprecision(2);

    if (double shortfall = maintenanceMargin - equity; shortfall > 0) {
        cout << "Margin call! Shortfall: " << shortfall << endl;
    }
    else if (equity < warningLevel) {
        cout << "Warning: equity is low." << endl;
    }
    else {
        cout << "Account is in good standing." << endl;
    }

    return 0;
}
