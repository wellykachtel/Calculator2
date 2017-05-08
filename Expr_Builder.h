
//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_EXPR_BUILDER_H_
#define _CS507_EXPR_BUILDER_H_
#include "Expr_Tree.h"

/**
* @class Expr_Builder
*
* interface for building an expression
*/

class Expr_Builder {
public:
	/// Default constructor.
	Expr_Builder(void) {}

	/// Destructor.
	~Expr_Builder(void){}

	/**
	* pure virtual methods to start an expression
	*
	* @param		void
	* @return       void
	*/
	virtual void start_expression(void) = 0;

	/**
	* pure virtual method to handle the number
	* of an expression
	*
	* @param		n, int
	* @return       void
	*/
	virtual void build_number(int n) = 0;

	/**
	* pure virtual methods to handle the operands
	* of an expression
	*
	* @param		void
	* @return       void
	*/
	virtual void build_add_operand(void) = 0;
	virtual void build_sub_operand(void) = 0;
	virtual void build_mult_operand(void) = 0;
	virtual void build_mod_operand(void) = 0;
	virtual void build_div_operand(void) = 0;

	/**
	* pure virtual method to handle the parentheses
	* of an expression
	*
	* @param		string
	* @return       void
	*/
	virtual void build_parentheses(std::string) = 0;

	/**
	* pure virtual methods to return an expression tree
	*
	* @param		void
	* @return       Expr_Tree
	*/
	virtual Expr_Tree get_expression(void) = 0;
	

};

#endif