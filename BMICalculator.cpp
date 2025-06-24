#include <iostream>
using namespace std;

double UserHeightInput() {
    double height;
    cout << "Your Height (m):";
    cin >> height;

    return height;
}

double UserWeightInput() {
    double weight;
    cout << "Your Weight (kg):";
    cin >> weight;

    return weight;
}

double BMICalculation(double weight, double height) {
    double bmi;
    bmi = weight / (height * height);
    cout << "Your BMI: " << bmi << endl; 
    return bmi;
}

int main() {
    cout << "==== BMI Calculator ====" << endl; 
    double Height = UserHeightInput() ;
    double Weight = UserWeightInput() ;
    double BMI;
    BMI = BMICalculation(Weight, Height);
    
    cout << "======== Results ======== " << endl;

    if (BMI < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (BMI < 25) {
        cout << "Normal Weight" << endl;
    }
    else if (BMI < 30) {
        cout << "Overweight" << endl; 
    }
    else 
        cout << "Obese" << endl;
    
    return 0;
}