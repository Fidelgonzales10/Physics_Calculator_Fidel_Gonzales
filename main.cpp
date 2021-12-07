//Practice with Functions Student: Fidel Gonzales, Teacher: Dr_T
//10-30-2019 
//I tried keeping it in the form found similar to this but could not figure out how to make it work for subsections on motion
#include "functions.h" //reference the header file 

int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease choose an option that you wish to be calculated: ";
      cout << color; //change text to green 
     //cin >> option; //getline(cin,option); //get the entire line
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\nGoodbye. <3." << endl;
  return 0; 
}