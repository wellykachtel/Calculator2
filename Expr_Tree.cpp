#include "Expr_Tree.h"


Expr_Tree::Expr_Tree(void)
{}
Expr_Tree::~Expr_Tree(void) {}

Expr_Node * Expr_Tree::get_root()
{
	//get the first element of the array
	return tree_[0];
}

void Expr_Tree::add(Expr_Node * node)
{
	tree_.push(node);
}

Expr_Node * Expr_Tree::get_and_delete()
{
	//this operates the same as pop in a stack 
	return tree_.pop();
}