#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <sstream>
#include "Expr_Builder.h"
/**
* @class Calculator
*
* contains methods to act upon a calculator
*/
class Calculator {

public:
	/// Default constructor.
	Calculator(void);

	/// Destructor.
	~Calculator(void);

	/**
	* parses the infix string into a expression tree
	*
	* @param	       infix, &b
	* @return          true/false, if successful/not
	*/
	bool parse_expression(const std::string & infix, Expr_Builder &b);
	
};


#endif
