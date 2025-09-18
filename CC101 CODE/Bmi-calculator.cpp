#include<iostream>
#include <iomanip>

int main () {
    double weight, height, bmi;
    int age;
    std:: string name;

    std:: cout << "Enter your name: ";
    std::getline(std::cin,name);
    std:: cout << "Enter your age: ";
    std:: cin >> age;
    std:: cout << "Enter your weight: ";
    std:: cin >> weight;
    std:: cout << "Enter your height: ";
    std:: cin >> height;

    if (height < 0 ) {
      std:: cout << "Height be grather than 0" <<std::endl;
      return 1; 
    }

    //process

    bmi = weight / (height * height);
    std:: cout << std::fixed << std::setprecision(2);
    std:: cout << "Your bmi is: " << bmi << std::endl;

    if (bmi < 18.5) {
        std:: cout << "You are Underweight " << std::endl;  
    } else if (bmi < 24.9) {
        std:: cout << "You are Normal Weight" << std::endl;
    } else if (bmi < 29.9) {
        std:: cout << "You are Overweght" << std::endl;
    } else {
        std:: cout << "Your are Obesity" << std::endl;
    }

    //DISPLAY
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Bmi: " << bmi << std::endl;
    return 0;
}