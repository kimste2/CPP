#include <iostream>
int main(int argc, char* argv[])
{
  int count;
  std::cout << "Fizz buzz. Print the first hundred numbers if the number is divisable by 3 print fizz, if the number is divisable by 5 print buzz.  If divisible by both print fizz buzz." << std:: endl; 
  for(count = 1; count < 101; count++)
  {
	if(count % 5 == 0 && count % 3 == 0)
	{

		std:: cout << "Fizz Buzz" << std:: endl;
	}
	else if(count % 5 == 0)
	{
		std:: cout << "Fizz\n";


	}
	else if(count % 3 == 0)
	{

		std:: cout << "Buzz\n";
	}
	else
	{
		std:: cout <<count << std:: endl; 
	}
	

  }
 
  return 0;
}
