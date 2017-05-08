
#include "Calculator.h"


	Calculator::Calculator(void) {}
	Calculator::~Calculator(void) {}

	bool Calculator::parse_expression(const std::string & infix, Expr_Builder &b)
	{
		std::istringstream input(infix);
		std::string token;

		b.start_expression();

		while (!input.eof())
		{
			input >> token;
			if (token == "+")
				b.build_add_operand();
			else if (token == "-")
				b.build_sub_operand();
			else if (token == "*")
				b.build_mult_operand();
			else if (token == "/")
				b.build_div_operand();
			else if (token == "%")
				b.build_mod_operand();
			else if (token == "(")
			{
				std::string substring;
				std::string temp;
				int i = 0;
				while (temp != ")")
				{
					input >> temp;
					if (temp != ")")
					{
						substring += temp;
						substring += " ";
					}
					else
						substring.resize(substring.size() - 1);
				}
				b.build_parentheses(substring);
			}
			else if (token >= "0" || token <= "9")
			{
				int stringToInt;
				std::istringstream(token) >> stringToInt;
				b.build_number(stringToInt);
			}


		}

		return true;

	}



