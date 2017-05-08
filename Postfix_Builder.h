//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_POSTFIX_BUILDER_H_
#define _CS507_POSTFIX_BUILDER_H_


#include "Expr_Builder.h"
#include "Stack.h"
#include "Expr_Tree.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mult_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"

class Postfix_Builder :public Expr_Builder {
public:
	Postfix_Builder()
	{ }

	~Postfix_Builder(void)
	{ }

	virtual void start_expression(void)
	{
		
	}
	virtual void build_number(int n)
	{


	}
	virtual void build_add_operand(void)
	{
		
	}

	virtual void build_sub_operand(void)
	{

	
	}

	virtual void build_div_operand(void)
	{
		
	}

	virtual void build_mult_operand(void)
	{
		
	}

	virtual void build_mod_operand(void)
	{
		
	}





private:
	std::string string;

};

#endif