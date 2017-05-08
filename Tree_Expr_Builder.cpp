#include "Tree_Expr_Builder.h"


Tree_Expr_Builder::Tree_Expr_Builder(void)
{ }

Tree_Expr_Builder::~Tree_Expr_Builder(void)
{ }

void Tree_Expr_Builder::start_expression()
{

}
void Tree_Expr_Builder::build_number(int n)
{
	//if it's a number, add it to the tree
	Number_Node *num = new Number_Node(n);
	//just add numbers to the tree as leaves

	(expr_tree_).add(num);

}
void Tree_Expr_Builder::build_add_operand(void)
{
	//pop the last two numbers to
	//put the operand before the numbers
	//Expr_Node * n1 = (expr_tree_).get_and_delete();
	//Expr_Node * n2 = (expr_tree_).get_and_delete();

	Add_Node *node = new Add_Node();

	if (op_stack.is_empty())
		op_stack.push(node);
	else
	{
		while (!op_stack.is_empty())
		{
			//pop off the operands that have higher precedence
			//than a plus or minus (ie, not equal to 1)

			if (op_stack[(op_stack.top() - 1)]->get_precedence() == 2)
			{
				Binary_Expr_Node *temp = op_stack.pop();

				//get the most recent nodes on the tree
				Expr_Node *n1 = (expr_tree_).get_and_delete();
				Expr_Node *n2 = (expr_tree_).get_and_delete();

				//set these as the children of the expression
				//that has just been popped
				temp->set_left_node(n1);
				temp->set_right_node(n2);

				//add this to the expression tree.
				expr_tree_.add(temp);
			}

			else
				break;

		}
		op_stack.push(node);
	}


}

void Tree_Expr_Builder::build_sub_operand(void)
{

	//pop the last two numbers to
	//put the operand before the numbers
	//Expr_Node * n1 = (expr_tree_).get_and_delete();
	//Expr_Node * n2 = (expr_tree_).get_and_delete();

	Sub_Node *node = new Sub_Node();

	if (op_stack.is_empty())
		op_stack.push(node);
	else
	{
		while (!op_stack.is_empty())
		{
			//pop off the operands that have higher precedence
			//than a plus or minus (ie, not equal to 1)

			if (op_stack[(op_stack.top() - 1)]->get_precedence() == 2)
			{
				Binary_Expr_Node *temp = op_stack.pop();

				//get the most recent nodes on the tree
				Expr_Node *n1 = (expr_tree_).get_and_delete();
				Expr_Node *n2 = (expr_tree_).get_and_delete();

				//set these as the children of the expression
				//that has just been popped
				temp->set_left_node(n1);
				temp->set_right_node(n2);

				//add this to the expression tree.
				expr_tree_.add(temp);
			}

			else
				break;

		}
		op_stack.push(node);
	}



}

 void Tree_Expr_Builder::build_div_operand(void)
{
	Div_Node *node = new Div_Node();
	op_stack.push(node);

}

 void Tree_Expr_Builder::build_mult_operand(void)
{
	Mult_Node *node = new Mult_Node();

	op_stack.push(node);
}

void Tree_Expr_Builder::build_mod_operand(void)
{
	Mod_Node *node = new Mod_Node();

	op_stack.push(node);
}
void Tree_Expr_Builder::build_parentheses(std::string substring)
{
Tree_Expr_Builder tree_builder2;
Stack<int> result2;
Calculator calc2;
calc2.parse_expression(substring, tree_builder2);
Expr_Tree  tree2 = tree_builder2.get_expression();
Eval_Expr_Tree eval2(result2, tree2);
tree2.get_root()->accept(eval2);
int res = eval2.get_result();
Number_Node *node = new Number_Node(res);
(expr_tree_).add(node);

}


 Expr_Tree Tree_Expr_Builder::get_expression() 
{
	while (!op_stack.is_empty())
	{
		Binary_Expr_Node *temp = op_stack.pop();

		//get the most recent nodes on the tree
		Expr_Node *n1 = (expr_tree_).get_and_delete();
		Expr_Node *n2 = (expr_tree_).get_and_delete();

		//set these as the children of the expression
		//that has just been popped
		temp->set_left_node(n1);
		temp->set_right_node(n2);

		//add this to the expression tree.
		expr_tree_.add(temp);
	}

	return expr_tree_;
}
