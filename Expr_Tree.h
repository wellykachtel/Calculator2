
//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _CS507_EXPR_TREE_H_
#define _CS507_EXPR_TREE_H_

#include "Stack.h"
#include "Expr_Node.h"

/**
* @class Expr_Tree
*
* contains the tree and methods for accessing its data
*/

class Expr_Tree {
public:
	/// Default constructor.
	Expr_Tree(void);

	/// Destructor.
	~Expr_Tree(void);

	/**
	* returns the root node of the tree
	*
	*
	* @param			void
	* @return			pointer to expression node
	*/
	Expr_Node * get_root(void);

	/**
	* To add a node to the tree
	*
	*
	* @param			&node
	* @return          void
	*/
	void add(Expr_Node * node);

	/**
	* return a node and delete it from the tree
	*
	*
	* @param			void
	* @return          Expression Node pointer
	*/
	Expr_Node * get_and_delete(void);

	


private:

	///contains the tree
	///using a stack to utilize the push/pop operations
	Stack<Expr_Node*> tree_;

};

#endif
