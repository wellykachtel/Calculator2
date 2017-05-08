//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_EXPR_NODE_H_
#define _CS507_EXPR_NODE_H_
/**
* @class Expr_Node
*
* Interface for any expression
*/

class Expr_Node_Visitor;

class Expr_Node {
public:
	/// Default constructor.
	Expr_Node(void) {}

	/// Destructor.
	virtual ~Expr_Node(void) {}

	/**
	* pure virtual method used by visitors to evaluate an expression node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v) = 0;
};

#endif