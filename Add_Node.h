//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_ADD_NODE_H_
#define _CS507_ADD_NODE_H_


#include "Binary_Expr_Node.h"
/**
* @class Add_Node
*
* handles the addition node of the expression tree
*/

class Add_Node : public Binary_Expr_Node {
public:
	/// Default constructor.
	Add_Node();

	/// Destructor.
	virtual ~Add_Node(void);

	/**
	* Used by visitors to evaluate an addition node
	* 
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

	
};

#endif