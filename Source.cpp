#include <iostream>
#include <Windows.h>
#include <conio.h>
int main()
{
	//Creates the file (which will be overwritten or left alone depending on the keys the user presses!
	system("echo This is a text document > thecodetext.txt");
	std::cout << "Created new file!\n";
	//Describing to the user what to do
	std::cout << "Press A to overwrite the text document, press any other key to leave it alone\n";
		//Gets the user  key variable (char)
		char myCharacter;
	//Pause the program until the user presses a key
		myCharacter = _getch();
		//Get keys 
		if (myCharacter == 'a')
		{
			system("echo The text document has been overwritten! > thecodetext.txt");
			std::cout << "Overwritten the file!\n";
			_getch();
		}
		else
		{
			std::cout << "The file has been left alone!\n";
			_getch();
		}

}
