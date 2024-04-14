#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL, else, the count
 *
 * Note: a NULL pointer is not a node
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count +=  binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
