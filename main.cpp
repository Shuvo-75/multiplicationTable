
#include <iostream>
#include <limits>

using namespace std;

void multiplication(int number)
{
    cout << "Here is Multiplication Table" << endl;
    for(int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl; 
    }
}

void request_input() 
{
    int number; 
    
    while (true) 
    {
        cout << "Enter a number from 1 to 100: "; 
        
        if (cin >> number) 
        {
            if(number >= 1 && number <= 100) 
            {
                multiplication(number);
                break; 
            } 
            else 
            {
                cout << "[!] Error: Number must be strictly between 1 and 100. Try again.\n\n"; 
            }
        } else 
        {
            cout << "[!] Fatal Error: That is not a valid number. Try again.\n\n";
            
            cin.clear(); 

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }
}
int main()
{
    request_input();  
    return 0;
}