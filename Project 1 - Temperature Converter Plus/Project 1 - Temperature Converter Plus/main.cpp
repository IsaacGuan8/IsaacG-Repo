#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin)
{
    return kelvin - 273.15;
}

int main(){
    bool quit = false;
    int choice = 0;
    double temperature = 0;
    
    
    // brief introduction and intructions
    cout << "Hello, welcome to Temperature Converter Plus!" << endl;
    cout << "Type the number representing each of the operation to get started\n" << endl;
    
    do{
        // display menu
        cout << "(1) Celsius to Fahrenheit" << endl;
        cout << "(2) Fahrenheit to Celsius" << endl;
        cout << "(3) Celsius to Kelvin " << endl;
        cout << "(4) Kelvin to Fahrenheit" << endl;
        cout << "(5) Quit\n" << endl;
        cout << "Enter you selection:" << endl;
        cin >> choice;
        
        /*cout << << endl;*/
        
        switch(choice)
        {
            case 1:
                
                cout << "what is the temperature in Celsius?" << endl;
                cin >> temperature;
                cout << "\n" << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " in Fahrentheit\n" << endl;
                break;
                
            case 2:
                
                cout << "what is the temperature in Fahrenheit?" << endl;
                cin >> temperature;
                cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " in Celsius\n" << endl;
                break;
                
            case 3:
                
                cout << "what is the temperature in Celsius?" << endl;
                cin >> temperature;
                cout << temperature << " celsius is " << celsiusToKelvin(temperature) << " in Kelvin\n" << endl;
                break;
                
            case 4:
                
                cout << "what is the temperature in Celsius?" << endl;
                cin >> temperature;
                cout << temperature << " Kelvin is " << kelvinToCelsius(temperature) << " in Celsius\n" << endl;
                break;
            case 5:
                cout << "Thank you for using this calculator have a nice day!" << endl;
                quit = true;
                break;
                
            default:
                cout << "invalid option please select a number in the menu" << endl;

        }
    }while(quit != true);
    
    return 0;
}
