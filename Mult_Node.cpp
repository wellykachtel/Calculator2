

#include "Mult_Node.h"
#include "Expr_Node_Visitor.h"

Mult_Node::Mult_Node(void)
{
	this->prec = 2;
}
Mult_Node::~Mult_Node(void) {}

void Mult_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Mult_Node(*this);
}