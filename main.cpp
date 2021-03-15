/*ABC-FORMULA test: 2*/
#include <iostream>
#include <math.h>	/* sqrt  */


/* Some declarations */
void shittyMenu();	// Logo/Title
float getUserInput();	// Get value from user


/* x1( -b - square root( b * b - 4 * a * c )) 
 * Usually outputs the negative number */
float abcX1(float a, float b, float c)
{
	float squareRoot{ sqrt( b*b - 4*a*c  ) };
	float formula{ -b - sqrt( b*b - 4*a*c ) };
	
	return formula;
}

/* X2( -b + square root( b * b - 4 * a * c ))
 * Usually outputs the positive number */
float abcX2(float a, float b, float c)
{
	float squareRoot{ sqrt( b*b - 4*a*c  )  };
	float formula{ -b + squareRoot  };

	return formula;
}


int main()
{
	/* Shitty Menu */
	shittyMenu();
	
	/* Get the user input for a, b and c */
	std::cout << "\nA";
	float a{ getUserInput() };
	std::cout << "\nB";
	float b{ getUserInput() };
	std::cout << "\nC";
	float c{ getUserInput() };

	/* X1 */
	float x1num{ abcX1(a, b, c) };
	std::cout << "\nX1 == " << x1num << '\n';

	/* X2 */
	float x2num{ abcX2(a, b, c) };
	std::cout << "X2 == " << x2num << '\n';	
		
	return 0;
}
