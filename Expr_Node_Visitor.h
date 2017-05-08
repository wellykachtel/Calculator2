//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_EXPR_NODE_VISITOR_H_
#define _CS507_EXPR_NODE_VISITOR_H_


//#include "Expr_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Div_Node.h"
#include "Mult_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"
/**
* @class Expr_Node_Visitor
*
* interface for any visitor that acts on a expression node
*/
class Expr_Node_Visitor {
public:
	/// Default constructor.
	Expr_Node_Visitor(void){}

	/// Destructor.
	virtual ~Expr_Node_Visitor(void){}

	/**
	* pure virtual methods to handle the visitation of operands
	* in an expression tree
	*
	* @param		&node
	* @return       void
	*/
	virtual void Visit_Number_Node(const Number_Node &node) = 0;
	virtual void Visit_Add_Node(const Add_Node &node) = 0;
	virtual void Visit_Sub_Node(const Sub_Node &node) = 0;
	virtual void Visit_Mult_Node(const Mult_Node &node) = 0;
	virtual void Visit_Div_Node(const Div_Node &node) = 0;
	virtual void Visit_Mod_Node(const Mod_Node &node) = 0;

};

#endif