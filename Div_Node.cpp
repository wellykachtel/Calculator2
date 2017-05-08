
#include "Div_Node.h"
#include "Expr_Node_Visitor.h"

Div_Node::Div_Node()
{
	this->prec = 2;
}
Div_Node::~Div_Node(void) {}

void Div_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Div_Node(*this);
}