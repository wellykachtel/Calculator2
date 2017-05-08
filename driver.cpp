/* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/

#include "Stack.h"
#include "Array.h"
#include "Tree_Expr_Builder.h"
#include "Eval_Expr_Tree.h"
#include "Calculator.h"
#include <iostream>
#include <sstream>


// Kelly, please write enough comments in all your classes to explain breifly what your code does.
//to fix this, I added more comments to my code
int main()
{

	std::string infix;

	//using a while loop so the user can input multiple expressions
	while (infix != "QUIT")
	{
		std::cout << "Enter an expression: " << std::endl;
		//getline gets all the characters entered by the user
		std::getline(std::cin, infix);
		if (infix == "QUIT")
			break;
	
		Tree_Expr_Builder tree_builder;
		Stack<int> result;
		Calculator calc;
		calc.parse_expression(infix, tree_builder);
		Expr_Tree  tree = tree_builder.get_expression();
		Eval_Expr_Tree eval(result,tree);
		tree.get_root()->accept(eval);
		int res = eval.get_result();
		std::cout << res << std::endl;
	}

	std::cout << "Goodbye" << std::endl;


	return 0;
}


