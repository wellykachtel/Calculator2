

#include "Number_Node.h"
#include "Expr_Node_Visitor.h"

Number_Node::Number_Node(int val)
	:num(val)
{ }
Number_Node::~Number_Node(void)
{ }

void Number_Node::accept(Expr_Node_Visitor &v)
{
	v.Visit_Number_Node(*this);
}

int Number_Node::get_num(void) const
{
	return this->num;
}