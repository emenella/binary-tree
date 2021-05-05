#ifndef BINARY_TREE
# define BINARY_TREE

typedef struct s_tree
{
	s_node	*root;
}			t_tree;

typedef struct s_node
{
	TYPE	*data;
	s_node	*left;
	s_node	*right;
}			t_node;

t_node	*ft_new_node(TYPE data);
void	ft_add_node(t_tree *tree, t_node *new);
int		ft_tree_size(t_tree *tree);
void	ft_print_node(t_tree *tree);

#endif
