#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree(Stack<int> tree, Expr_Tree expr)
	:stack_tree(tree),
	to_evaluate(expr)
{}
Eval_Expr_Tree::~Eval_Expr_Tree(void) {}


void Eval_Expr_Tree::Visit_Number_Node(const Number_Node &node)
{
	int n = node.get_num();
	stack_tree.push(n);
}
void Eval_Expr_Tree::Visit_Add_Node(const Add_Node &node)
{
	//visit the nodes, then perform addition
	node.get_left_node()->accept(*this);
	node.get_right_node()->accept(*this);
	int n1 = stack_tree.pop();
	int n2 = stack_tree.pop();
	stack_tree.push(n1 + n2);
}


void Eval_Expr_Tree::Visit_Sub_Node(const Sub_Node &node)
{
	//visit the nodes, then perform addition
	node.get_left_node()->accept(*this);
	node.get_right_node()->accept(*this);
	int n1 = stack_tree.pop();
	int n2 = stack_tree.pop();
	stack_tree.push(n1 - n2);

}

void Eval_Expr_Tree::Visit_Mult_Node(const Mult_Node &node)
{
	//visit the nodes, then perform addition
	node.get_left_node()->accept(*this);
	node.get_right_node()->accept(*this);
	int n1 = stack_tree.pop();
	int n2 = stack_tree.pop();
	stack_tree.push(n1 * n2);
}

void Eval_Expr_Tree::Visit_Div_Node(const Div_Node &node)
{
	//visit the nodes, then perform addition
	node.get_left_node()->accept(*this);
	node.get_right_node()->accept(*this);
	int n1 = stack_tree.pop();
	int n2 = stack_tree.pop();
	stack_tree.push(n1 / n2);
}

void Eval_Expr_Tree::Visit_Mod_Node(const Mod_Node &node)
{
	//visit the nodes, then perform addition
	node.get_left_node()->accept(*this);
	node.get_right_node()->accept(*this);
	int n1 = stack_tree.pop();
	int n2 = stack_tree.pop();
	stack_tree.push(n1 % n2);
}

void Eval_Expr_Tree::Visit_Tree()
{
	to_evaluate.get_root()->accept(*this);
}

int Eval_Expr_Tree::get_result(void)
{
	return stack_tree.pop();
}

