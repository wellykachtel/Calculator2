//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_MULT_NODE_H_
#define _CS507_MULT_NODE_H_


#include "Binary_Expr_Node.h"

/**
* @class Mult_Node
*
* handles the multiplication node of the expression tree
*/
class Mult_Node : public Binary_Expr_Node {
public:
	/// Default constructor.
	Mult_Node();

	/// Destructor.
	virtual ~Mult_Node(void);

	/**
	* Used by visitors to evaluate an multiply node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

};

#endif