

#include "Mod_Node.h"
#include "Expr_Node_Visitor.h"


Mod_Node::Mod_Node(void)
{
	this->prec = 2;
}
Mod_Node::~Mod_Node(void) {}

void Mod_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Mod_Node(*this);
}
