#include <iostream>
#include <fstream>







int main(void){
	
	char choice0;

	std::string pass_input0;

	



	std::cout << "Do u want to encrypt your data? (case sensitive[Y/N]) \n";
	

	std::cin >> choice0;


	switch(choice0) {
			case 'Y' :
			
				
			std::cout << "Give me le password\n";
			
			std::cin >> pass_input0;

			std::cout << "Database writing...\n";	
			
			std::fstream my_file;
	
			my_file.open("my_file.txt", std::ios::out);	

			my_file << pass_input0;
		
			my_file.close();
	
			break;
	}
	
/*

	switch(choice0)
			case 'N' :
			std::cout << "Cya\n";
			break;
	}
*/
	return 0;
}
