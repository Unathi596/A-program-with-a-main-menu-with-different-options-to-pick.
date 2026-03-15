#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main()
{
		
		// Boolean Variable //
		bool blnContinue = true; // Initialized //
		
	do
	{
		system("cls");
		// Constructing main-menu //
		cout << "Option A: Number Patterns" << endl;
		cout << "Option B: Prime Numbers" << endl;
		cout << "Option C: Printing non-vowel characters in a string" << endl;
		cout << "Option X: Exit the program" << endl << endl;
	
		// Character Variable //
		char chOption = '\0'; // Null Character //
	
		// Prompt the user to choose one option above //
		cout << "Please select one option above: ";
		cin >> chOption;
		cin.clear(); // Remove the fail flag //
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); // Clear the buffer //
		cout << endl;
		
		// Switch Case //
		switch(tolower(chOption))
		{
			case 'a':
			{
				// Option A - Number Patterns //
				cout << "\t===Number Patterns===" << endl;
	
				// Variable Declaration //
				int intNumber = 0;
				int intNumTerms = 0;
				int intResult = 0;
	
				// User Input //
				cout << "Enter the first term of the sequence (Starting Value): ";
				cin >> intNumber;
				
				// Validation of the number //
				while(intNumber < 0 || cin.fail())
				{
					cerr << "You have either entered a negative number or a non-integer value. " << endl;
					system("pause");
					cin.clear(); // Removes the fail flag //
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
					
					// Try again //
					cout << "Please enter a number that is greater than zero but not a non-integer value: ";
					cin >> intNumber;
				}
				
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
				
					// Number of terms //
					cout << "Enter the number of terms required to construct the sequence: ";
					cin >> intNumTerms;
					cout << endl;
				
					// Validation of the number of terms //
					while(intNumTerms <= 0 || cin.fail())
					{
						cerr << "Sequence cannot be constructed if number of terms is less than or equals to zero or if you have entered a non-integer value" << endl;
						cin.clear(); // Removes the fail flag //
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
						system("pause");
						
						// Try again //
						cout << "Please enter a number that is greater than or equals to zero but not a non-integer value this time: ";
						cin >> intNumTerms;
					}
						
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
				
						// Generating Sequence //
						cout << "==Sequence==" << endl;
				
						for(int i = 0; i < intNumTerms; i++) // For loop //
						{
							intResult = intNumber * intNumber; // Squaring the number //
							cout << intResult << " "; // Display the result //
					
							intNumber += 2; // Increment the number by 2 //
						}
				
						cout << endl;
						
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
						system("pause");
						system("cls");
					
			}
		
			
				break;
				
			case 'b':
			{
				// Option B --> Prime Numbers //
				cout << "\t==Prime Numbers==" << endl;
				
				// Variables //
				int intNumber = 0; 
				int intNumOfFactors = 0;
				int intDivisor = 1; // Careful //
				
					// User Input //
				cout << "Enter a number: ";
				cin >> intNumber;
				cout << endl;
				
				// Validation // 
				while(intNumber <= 0 || cin.fail())
				{
					cerr << "Negative numbers including zero are not considered as prime numbers or any non-integer value" << endl;
					system("pause");
					cin.clear(); // Removes the fail flag //
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
					
					
					// Try again //
					cout << "Please enter a number that is greater than or equals to zero but not a non-integer value this time: ";
					cin >> intNumber;

				}
				
					// Factors //
					cout << "==Factors==" << endl;
					cout << "Factors of " << intNumber << ": ";
				
					while(intDivisor <= intNumber) // While Loop //
					{
						if(intNumber % intDivisor == 0)
						{
							intNumOfFactors += 1;
					
							cout << intDivisor << " "; // The factor //
						}
					
						intDivisor += 1;
					}
				
					cout << endl << endl;
					
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer //
				
						// Conditional Operator //
					(intNumOfFactors == 2)? cout << "The number " << intNumber << " is a prime number because it has factors 1 and itself (" << intNumber << ")" << endl : cout << "This number is not a prime number beacuse it has more one factor" << endl;
				
					system("pause");
					system("cls");
				}
			
			
			break;
			
			case 'c':
			{
				// Option C --> Printing out all the non-vowel characters in a string //
				cout << "\t===Printing non-vowel charaters in a string===" << endl << endl;
				
				// Strings //
				string strString;
				char chVowel = '\0';
				
				cout << "Enter any amount of characters in a string: ";
				getline(cin, strString); // Includes whitespaces //
				
				// Heading //
				cout << "==Non-Vowel Characters==" << endl;
				cout << "Non-Vowel Characters: " << endl;
				
				// Finding non-vowel characters in a string //
				for(char c : strString) // for each loop //
				{
					
					if(c != 'A' && c!= 'E' && c != 'I' && c!= 'O' && c != 'U' && 
					c != 'a' && c != 'e' && c != 'i' && c != 'o' && c!= 'u')
					{
						cout << c << " ";
					}
					
				}
				
				cout << endl;
				
				// Done //
				system("pause");
				system("cls");
			}
			
			break;
			
			case 'x':
			{
				// Option X -- Exit Program //
				cout << "Program Exited" << endl;
				blnContinue = false;
				system("pause");
				system("cls");
			}
			
			break;
			
			default:
			{
				// Invalid Input //
				cerr << "Invalid Option! Try again!" << endl;
				system("pause");
				system("cls");
			}
		}
		
	}while(blnContinue == true);
	
	return 0;
}