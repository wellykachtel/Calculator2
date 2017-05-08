


#include "Binary_Expr_Node.h"
Binary_Expr_Node::Binary_Expr_Node(void)
	:right_(0),
	left_(0),
	prec(0)
{ }
Binary_Expr_Node:: ~Binary_Expr_Node(void)
{ }


Expr_Node* Binary_Expr_Node::get_right_node(void) const
{
	return this->right_;
}

Expr_Node* Binary_Expr_Node::get_left_node(void) const
{
	return this->left_;
}
void Binary_Expr_Node::set_right_node(Expr_Node* right)
{
	this->right_ = right;
}
void Binary_Expr_Node::set_left_node(Expr_Node* left)
{
	this->left_ = left;
}
int Binary_Expr_Node::get_precedence()
{
	return this->prec;
}
