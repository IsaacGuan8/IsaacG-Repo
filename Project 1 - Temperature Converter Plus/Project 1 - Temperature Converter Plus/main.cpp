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

double kelvinGlobalConverter(double temperature, const char unit){

    switch(unit)
    {
        case 'F': case 'f':
            return celsiusToKelvin(kelvinToCelsius(temperature));
            break;
            
        case 'C': case 'c':
            return kelvinToCelsius(temperature);
            break;
            
        default:
            cout << "please, input a valid temperature (F or C)" << endl;
            return 0;
            break;
    }
}

double celsiusGlobalConverter(double temperature, const char unit){
    switch(unit)
    {
        case 'K': case 'k':
            return celsiusToKelvin(temperature);
            break;
            
        case 'F': case 'f':
            return fahrenheitToCelsius(temperature);
            break;
            
        default:
            cout << "please, input a valid temperature (K or C)" << endl;
            return 0;
            break;
    }
}

double fahrenheitGlobalConverter(double temperature, const char unit){
    switch(unit)
    {
        case 'C': case 'c':
            return fahrenheitToCelsius(temperature);
            break;
            
        case 'K': case 'k':
            return celsiusToKelvin(fahrenheitToCelsius(temperature));
            break;
            
        default:
            cout << "please, input a valid temperature (C or K)" << endl;
            return 0;
            break;
    }
}

double globalConverter(double temperature, const char unitIn, const char unitOut){
    if(unitIn == unitOut)
    {
        return temperature;
    }
    
    if (unitIn == 'C'){
        return celsiusGlobalConverter(temperature, unitOut);
    }
    else if (unitIn == 'F'){
        return fahrenheitGlobalConverter(temperature, unitOut);
    }
    else if (unitIn == 'K'){
        return kelvinGlobalConverter(temperature, unitOut);
    }
    return temperature;
}

char isValidUnit(string prompt){
    char unit;
    while(true){
        cout << prompt;
        cin >> unit;
        if(unit == 'C' || unit == 'F' || unit == 'K')
        {
            return unit;
        }
        cout << "Invalid unit, Please enter C for Celsius, F for Fahrenheit, and K for Kelvin." << endl;
    }
}

void getUserInput(double& temp, char& unitIn, char& unitOut)
{
    cout << "what is the inital temperature (quantity): " << endl;
    cin >> temp;
    unitIn = isValidUnit("Enter an input unit (enter C for Celsius, F for Fahrenheit, and K for Kelvin)\n");
    cout << endl;
    cout << "Enter an output unit (enter C for Celsius, F for Fahrenheit, and K for Kelvin)\n" << endl;
    cin >> unitOut;
}

string getTemperatureUnit(char initial)
{
    if (initial == 'C'){
        return " Celsius";
    }
    if (initial == 'F'){
        return " Fahrenheit";
    }
    if (initial == 'K'){
        return " Kelvin";
    }
    return "Unknown unit";
}

int main(){
    bool quit = false;
    int choice = 0;
    double temperature = 0;
    char unitIn;
    char unitOut;
    
    
    // brief introduction and intructions
    cout << "Hello, welcome to Temperature Converter Plus!" << endl;
    cout << "Type the number representing each of the operation to get started\n" << endl;
    
    do{
        // display menu
        cout << "(1) Celsius to Fahrenheit" << endl;
        cout << "(2) Fahrenheit to Celsius" << endl;
        cout << "(3) Celsius to Kelvin" << endl;
        cout << "(4) Kelvin to Fahrenheit" << endl;
        cout << "(5) Kelvin to any temperature" << endl;
        cout << "(6) Celsius to any temperature" << endl;
        cout << "(7) Fahrenheit to any temperature" << endl;
        cout << "(8) any temperature to any temperature" << endl;
        cout << "(9) Quit\n" << endl;
        cout << "Enter your selection:" << endl;
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
                getUserInput(temperature, unitIn, unitOut);
                cout << endl;
                cout << temperature << getTemperatureUnit(unitIn) << " is " <<kelvinGlobalConverter(temperature, unitOut) << getTemperatureUnit(unitOut) << endl;
                cout << endl;
                break;
                
            case 6:
                getUserInput(temperature, unitIn, unitOut);
                cout << endl;
                cout << temperature << getTemperatureUnit(unitIn) << " is " <<celsiusGlobalConverter(temperature, unitOut) << getTemperatureUnit(unitOut) << endl;
                cout << endl;
                break;
                
            case 7:
                getUserInput(temperature, unitIn, unitOut);
                cout << endl;
                cout << temperature << getTemperatureUnit(unitIn) << " is " <<fahrenheitGlobalConverter(temperature, unitOut) << getTemperatureUnit(unitOut) << endl;
                cout << endl;
                break;
                
            case 8:
                getUserInput(temperature, unitIn, unitOut);
                cout << endl;
                cout << temperature << getTemperatureUnit(unitIn) << " is " << globalConverter(temperature, unitIn, unitOut) << getTemperatureUnit(unitOut) << endl;
                cout << endl;
                break;
                
            case 9:
                cout << "Thank you for using this calculator have a nice day!" << endl;
                quit = true;
                break;
                
            default:
                cout << "invalid option please select a number in the menu" << endl;

        }
    }while(quit != true);
    
    return 0;
}
