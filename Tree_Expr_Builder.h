//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_TREE_EXPR_BUILDER_H_
#define _CS507_TREE_EXPR_BUILDER_H_


#include "Expr_Builder.h"
#include "Stack.h"
#include "Expr_Tree.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mult_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Number_Node.h"
#include "Calculator.h"
#include "Eval_Expr_Tree.h"

/**
* @class Tree_Expr_Builder
*
* utilizes Expr_Builder class to build the nodes into an expression tree structure
*/

class Tree_Expr_Builder :public Expr_Builder {
public:
	/// Default constructor.
	Tree_Expr_Builder(void);

	/// Destructor.
	~Tree_Expr_Builder(void);
	

	virtual void start_expression();
	virtual void build_number(int n);
	virtual void build_add_operand(void);
	virtual void build_sub_operand(void);
	virtual void build_div_operand(void);
	virtual void build_mult_operand(void);
	virtual void build_mod_operand(void);
	virtual Expr_Tree get_expression();
	virtual void build_parentheses(std::string substring);


	



private:

	///the expression tree to be added to
	Expr_Tree expr_tree_;

	///the stack to keep track of operations while building the tree
	Stack<Binary_Expr_Node*> op_stack;

};

#endif