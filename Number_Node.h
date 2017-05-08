

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_NUMBER_NODE_H_
#define _CS507_NUMBER_NODE_H_


#include "Expr_Node.h"
/**
* @class Number_Node
*
* handles the number node of the expression tree
*/
class Number_Node : public Expr_Node {

public:
	/// Default constructor.
	Number_Node(int val);

	/// Destructor.
	~Number_Node(void);
	
	/**
	* Used by visitors to evaluate an number node
	*
	*
	* @param			&v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v);

	/**
	* get the number at a number node
	*
	*
	* @param		void
	* @return       num, int
	*/
	int get_num(void) const;


private:

	///the number contained in a number node
	int num;

};

#endif