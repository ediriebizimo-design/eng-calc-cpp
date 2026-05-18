# Engineering Calculation Tool
**Language:** C++ &nbsp;|&nbsp; **Library:** `<cmath>` &nbsp;|&nbsp; **Course:** ELEG 1304 – Capstone Project #1  
**University:** Prairie View A&M University &nbsp;|&nbsp; **Author:** Esiri Angel Ediri

---

## Overview
A menu-driven command-line application that computes 10 common engineering calculations and unit conversions. The user selects a calculation type, enters the required values, and the program displays the result. Input validation handles invalid menu selections and non-numeric entries gracefully.

---

## Calculations Supported

| # | Calculation | Formula |
|---|-------------|---------|
| 1 | Velocity | v = d / t |
| 2 | Area of a Circle | A = π r² |
| 3 | Area of a Rectangle | A = l × w |
| 4 | Area of a Triangle | A = ½ b h |
| 5 | Voltage (Ohm's Law) | V = I × R |
| 6 | Power | P = V × I |
| 7 | Miles → Kilometers | km = mi × 1.60934 |
| 8 | Kilometers → Miles | mi = km / 1.60934 |
| 9 | Feet → Meters | m = ft × 0.3048 |
| 10 | Meters → Feet | ft = m / 0.3048 |

---

## How to Compile & Run

```bash
g++ -o eng_calc main.cpp -lm
./eng_calc
```

---

## Sample Output

```
======================================
   Engineering Calculation Tool
======================================
  1.  Velocity              (v = d / t)
  2.  Area of a Circle      (A = pi * r^2)
  ...
  0.  Exit
--------------------------------------
  Select an option: 1
  Enter distance (m): 100
  Enter time (s): 5
  Velocity = 20.0000 m/s
```

---

## Concepts Demonstrated
- Modular function design (`calcVelocity`, `calcAreaCircle`, etc.)
- Input validation loop with `cin.clear()` and `cin.ignore()`
- `<cmath>` library usage
- `switch` statement for menu routing
- `<iomanip>` for formatted decimal output
