

#include "Add_Node.h"
#include "Expr_Node_Visitor.h"

Add_Node::Add_Node()
{
	this->prec = 1;
}
Add_Node::~Add_Node(void) {}

void Add_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Add_Node(*this);
}