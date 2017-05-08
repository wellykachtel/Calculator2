//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_SUB_NODE_H_
#define _CS507_SUB_NODE_H_
/**
* @class Sub_Node
*
* handles the subtraction node of the expression tree
*/

#include "Binary_Expr_Node.h"


class Sub_Node : public Binary_Expr_Node {
public:
	/// Default constructor.
	Sub_Node();

	/// Destructor.
	virtual ~Sub_Node(void);

	/**
	* Used by visitors to evaluate an subtraction node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

};

#endif