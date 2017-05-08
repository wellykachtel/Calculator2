//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_MOD_NODE_H_
#define _CS507_MOD_NODE_H_


#include "Binary_Expr_Node.h"
/**
* @class Mod_Node
*
* handles the modulus node of the expression tree
*/

class Mod_Node : public Binary_Expr_Node {
public:
	/// Default constructor.
	Mod_Node();

	/// Destructor.
	virtual ~Mod_Node(void);

	/**
	* Used by visitors to evaluate an modulus node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

};

#endif