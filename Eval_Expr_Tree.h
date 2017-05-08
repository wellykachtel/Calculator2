//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_EVAL_EXPR_TREE_H_
#define _CS507_EVAL_EXPR_TREE_H_


#include "Expr_Node_Visitor.h"
#include "Stack.h"
#include "Expr_Tree.h"
/**
* @class Eval_Expr_Tree
*
* a visitor that will evaluate expressions according to a tree structure
*/


class Eval_Expr_Tree : public Expr_Node_Visitor {
public:
	/// Default constructor.
	Eval_Expr_Tree(Stack<int> tree, Expr_Tree expr);

	/// Destructor.
	virtual ~Eval_Expr_Tree(void);

	/**
	* Defines what happens when the Eval_Expr_Tree
	* visits a specified node.
	*
	* @param			&node
	* @return           void
	*/
	virtual void Visit_Number_Node(const Number_Node &node);
	virtual void Visit_Add_Node(const Add_Node &node);
	virtual void Visit_Sub_Node(const Sub_Node &node);
	virtual void Visit_Mult_Node(const Mult_Node &node);
	virtual void Visit_Div_Node(const Div_Node &node);
	virtual void Visit_Mod_Node(const Mod_Node &node);

	/**
	* Contains the logic to evaluate a completed tree
	*
	*
	* @param			void
	* @return          void
	*/
	virtual void Visit_Tree(void);
	
	/**
	* returns the end result
	*
	*
	* @param			void
	* @return          result_,int
	*/
	int get_result(void);


	

private:

	///the end result
	int result_;

	///the stack that keeps track of the numbers used in building
	Stack<int> stack_tree;

	///the actual expression tree
	Expr_Tree to_evaluate;
};

#endif