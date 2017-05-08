//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_DIV_NODE_H_
#define _CS507_DIV_NODE_H_


#include "Binary_Expr_Node.h"
/**
* @class Div_Node
*
* handles the division node of the expression tree
*/

class Div_Node : public Binary_Expr_Node {
public:
	/// Default constructor.
	Div_Node();

	/// Destructor.
	virtual ~Div_Node(void);

	/**
	* Used by visitors to evaluate an division node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

};

#endif