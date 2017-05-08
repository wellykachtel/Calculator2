//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================


#ifndef _CS507_BINARY_EXPRESSION_NODE_H_
#define _CS507_BINARY_EXPRESSION_NODE_H_


#include "Expr_Node.h"
/**
* @class Binary_Expr_Node
*
* A more specified Expr_Node that has right and left children, as well as precedence
*/


class Binary_Expr_Node : public Expr_Node {
public:
	/// Default constructor.
	Binary_Expr_Node(void);

	/// Destructor.
	virtual ~Binary_Expr_Node(void);

	/**
	* Used by visitor methods to evaluate binary expression nodes
	*
	* @param            &v
	* @return          void
	*/
	virtual void accept(Expr_Node_Visitor &v) = 0;

	/**
	* Get the node that is the right child of the current node
	*
	* @param	       void
	* @return          a pointer to an Expr_Node
	*/
	Expr_Node* get_right_node(void) const;

	/**
	* Get the node that is the left child of the current node
	*
	* @param	       void
	* @return          a pointer to an Expr_Node
	*/
	Expr_Node* get_left_node(void) const;

	/**
	* Set the node that is the right child of the current node
	*
	* @param	       right, an expression node pointer
	* @return          void
	*/
	void set_right_node(Expr_Node* right);

	/**
	* Set the node that is the left child of the current node
	*
	* @param	       left, an expression node pointer
	* @return          void
	*/
	void set_left_node(Expr_Node* left);

	/**
	* get the precedence of the current node.
	* only binary expression nodes have precedence
	*
	* @param	       void
	* @return          prec, int
	*/
	int get_precedence(void);
	
	
protected:

	///the right child of a node
	Expr_Node *right_;

	///the left child of a node
	Expr_Node *left_;

	///the precedence value of a node
	int prec;

};

#endif