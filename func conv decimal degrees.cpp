#include <iostream>
using namespace std;
int main() {
    double decimal_degrees, degrees, minutes, seconds;
    cout << "Enter decimal degrees: ";
    cin >> decimal_degrees;
    degrees = int(decimal_degrees);
    minutes = (decimal_degrees - degrees) * 60;
    seconds = (minutes - int(minutes)) * 60;
    cout << degrees << " degrees " << int(minutes) << " minutes " << seconds << " seconds" << endl;
    return 0;
}
