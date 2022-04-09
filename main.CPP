/* 
* Author: Juan Luis Leiro Ventoso 
* Date: 09/04/2022 10:25
* Project: BRL-test
* Executable: rocket
* 
*/

/* Include libraries*/
#include <iostream>

/* 
* 
* main function. 
* Argc is the number of arguments, argv the vector which contains the arguments values.
* 
*/
int main( int argc, char* argv[] )
{
	/*
	*
	* We need unless three elements in argv. 
	* argv[0] which is the name of the executable and forethemore we need -l and a number of rows
	*
	*/
    if(argc>2)
    {
		
		/*
		*
		* argv[2] should be the number os rows, then we need to convert it into an int. 
		*
		*/
        int rows = atoi(argv[2]);
		
		/*
		* 
		* Now we check if the command -l n is passed properly.
		* if argc==3 the command has two arguments. 
		* argv[1] should be "-l"
		* if rows is different to 0 is an int.
		* 
		*/
        if (( (argc==3) && (std::string(argv[1])=="-l") && (rows!=0) ))
        {
			
			/*
			* 
			* Print the spike at the center which is always in n-1
			* 
			*/
            for (int l = 0; l < rows ; l++)
            {
                if (l == rows - 1)
                {
                    std::cout << "|";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
			
			/*
			* 
			* Print the cohet, first the white spaces to center the figure and then the x.
			* 
			*/
            for (int i = 1; i <= rows; i++) 
            {
                for (int k = (rows - i); k > 0; k--) 
                {
                    std::cout << " ";
                }
                for (int j = 0; j < (1+(2*(i-1))); j++) 
                {
                    std::cout << "x";
                }
                std::cout << "\n";
            }
			
			/*
			* 
			* Print the base of the cohet, one x at the the beginning, another in n-1 and another at the end (n-1)*2
			* 
			*/
            for (int l = 0; l < (rows*2); l++)
            {
                if ((l == 0) || (l == rows -1) || (l == (rows - 1) * 2))
                {
                    std::cout << "x";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }   
				
		/*
		* 
		* Now we check if the command -l n -i is passed properly.
		* if argc==3 the command has two arguments. 
		* argv[1] should be "-l" 
		* if rows is different to 0 is an int.
		* argv[3] should be "-i" 
		* 
		*/
        else if (( (argc == 4) && (std::string(argv[1])=="-l") && (rows != 0) && (std::string(argv[3])=="-i") ))
        {
			
			/*
			* 
			* Print the base of the cohet, one x at the the beginning, another in n-1 and another at the end (n-1)*2
			* 
			*/
            for (int l = 0; l < (rows * 2); l++)
            {
                if ((l == 0) || (l == rows - 1) || (l == (rows - 1) * 2))
                {
                    std::cout << "x";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
			
			/*
			* 
			* Print the cohet, first the white spaces to center the figure and then the x.
			* 
			*/
            for (int i = rows; i > 0; i--)
            {
                for (int k = 0; k < (rows - i); k++)
                {
                    std::cout << " ";
                }
                for (int j = 1; j < (2*i); j++)
                {
                    std::cout << "x";
                }
                std::cout << "\n";
            }
			
			/*
			* 
			* Print the spike at the center which is always in n-1
			* 
			*/
            for (int l = 0; l < (rows * 2); l++)
            {
                if (l == rows - 1)
                {
                    std::cout << "|";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }
        else
		{
			
			/*
			* 
			* Explanatory message in case of error
			* 
			*/
            std::cout << "\nUse -l to to specify how tall you want the rocket to be by adding the number of lines after.";            
            std::cout << "\nExample: rocket -l n ( n = number of rows)\n";
            std::cout << "\nIf you want to invert the cohet use -i after -l n";        
            std::cout << "\nExample: rocket -l n -i ( n = number of rows)\n";
        }
    
    }
    else
    {
		
		/*
		* 
		* Explanatory message in case of error
		* 
		*/
		std::cout << "\nUse -l to to specify how tall you want the rocket to be by adding the number of lines after.";            
		std::cout << "\nExample: rocket -l n ( n = number of rows)\n";
		std::cout << "\nIf you want to invert the cohet use -i after -l n";        
		std::cout << "\nExample: rocket -l n -i ( n = number of rows)\n";
    }    
}