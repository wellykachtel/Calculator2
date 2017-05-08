

#include "Sub_Node.h"
#include "Expr_Node_Visitor.h"

Sub_Node::Sub_Node(void)
{
	this->prec = 1;
}
Sub_Node::~Sub_Node(void) {}

void Sub_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Sub_Node(*this);
}