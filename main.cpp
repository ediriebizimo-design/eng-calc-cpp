#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

// ============================================================
//  Engineering Calculation Tool
//  Language : C++
//  Course   : ELEG 1304 – Capstone Project #1
//  Author   : Esiri Angel Ediri
//  University: Prairie View A&M University
// ============================================================

const double PI = 3.14159265358979323846;

// ---------- Calculation Functions ----------

// 1. Velocity  (v = d / t)
double calcVelocity(double distance, double time) {
    return distance / time;
}

// 2. Area of a Circle  (A = π r²)
double calcAreaCircle(double radius) {
    return PI * radius * radius;
}

// 3. Area of a Rectangle  (A = l × w)
double calcAreaRectangle(double length, double width) {
    return length * width;
}

// 4. Area of a Triangle  (A = ½ b h)
double calcAreaTriangle(double base, double height) {
    return 0.5 * base * height;
}

// 5. Ohm's Law – Voltage  (V = I × R)
double calcVoltage(double current, double resistance) {
    return current * resistance;
}

// 6. Power  (P = V × I)
double calcPower(double voltage, double current) {
    return voltage * current;
}

// 7. Miles to Kilometers  (km = mi × 1.60934)
double milesToKm(double miles) {
    return miles * 1.60934;
}

// 8. Kilometers to Miles  (mi = km / 1.60934)
double kmToMiles(double km) {
    return km / 1.60934;
}

// 9. Feet to Meters  (m = ft × 0.3048)
double feetToMeters(double feet) {
    return feet * 0.3048;
}

// 10. Meters to Feet  (m → ft = m / 0.3048)
double metersToFeet(double meters) {
    return meters / 0.3048;
}

// ---------- Input Helper ----------
double getPositiveDouble(const string& prompt) {
    double val;
    while (true) {
        cout << prompt;
        if (cin >> val && val > 0) return val;
        cout << "  [!] Invalid input. Please enter a positive number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// ---------- Display Menu ----------
void showMenu() {
    cout << "\n======================================\n";
    cout << "   Engineering Calculation Tool\n";
    cout << "======================================\n";
    cout << "  1.  Velocity              (v = d / t)\n";
    cout << "  2.  Area of a Circle      (A = pi * r^2)\n";
    cout << "  3.  Area of a Rectangle   (A = l * w)\n";
    cout << "  4.  Area of a Triangle    (A = 1/2 * b * h)\n";
    cout << "  5.  Voltage – Ohm's Law   (V = I * R)\n";
    cout << "  6.  Power                 (P = V * I)\n";
    cout << "  7.  Miles to Kilometers\n";
    cout << "  8.  Kilometers to Miles\n";
    cout << "  9.  Feet to Meters\n";
    cout << "  10. Meters to Feet\n";
    cout << "  0.  Exit\n";
    cout << "--------------------------------------\n";
    cout << "  Select an option: ";
}

// ---------- Main ----------
int main() {
    cout << fixed << setprecision(4);
    int choice;

    do {
        showMenu();

        if (!(cin >> choice)) {
            cout << "  [!] Invalid selection. Please enter a number (0-10).\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                double d = getPositiveDouble("  Enter distance (m): ");
                double t = getPositiveDouble("  Enter time (s): ");
                cout << "  Velocity = " << calcVelocity(d, t) << " m/s\n";
                break;
            }
            case 2: {
                double r = getPositiveDouble("  Enter radius: ");
                cout << "  Area of Circle = " << calcAreaCircle(r) << " sq units\n";
                break;
            }
            case 3: {
                double l = getPositiveDouble("  Enter length: ");
                double w = getPositiveDouble("  Enter width: ");
                cout << "  Area of Rectangle = " << calcAreaRectangle(l, w) << " sq units\n";
                break;
            }
            case 4: {
                double b = getPositiveDouble("  Enter base: ");
                double h = getPositiveDouble("  Enter height: ");
                cout << "  Area of Triangle = " << calcAreaTriangle(b, h) << " sq units\n";
                break;
            }
            case 5: {
                double I = getPositiveDouble("  Enter current (A): ");
                double R = getPositiveDouble("  Enter resistance (Ohms): ");
                cout << "  Voltage = " << calcVoltage(I, R) << " V\n";
                break;
            }
            case 6: {
                double V = getPositiveDouble("  Enter voltage (V): ");
                double I = getPositiveDouble("  Enter current (A): ");
                cout << "  Power = " << calcPower(V, I) << " W\n";
                break;
            }
            case 7: {
                double mi = getPositiveDouble("  Enter miles: ");
                cout << "  " << mi << " miles = " << milesToKm(mi) << " km\n";
                break;
            }
            case 8: {
                double km = getPositiveDouble("  Enter kilometers: ");
                cout << "  " << km << " km = " << kmToMiles(km) << " miles\n";
                break;
            }
            case 9: {
                double ft = getPositiveDouble("  Enter feet: ");
                cout << "  " << ft << " ft = " << feetToMeters(ft) << " m\n";
                break;
            }
            case 10: {
                double m = getPositiveDouble("  Enter meters: ");
                cout << "  " << m << " m = " << metersToFeet(m) << " ft\n";
                break;
            }
            case 0:
                cout << "\n  Goodbye!\n\n";
                break;
            default:
                cout << "  [!] Invalid selection. Choose a number between 0 and 10.\n";
        }

    } while (choice != 0);

    return 0;
}
