#include <iostream>
#include "WeightedQuickUnion.hpp"
int main(void)
{
	int n;
	std::cin >> n;
	WeightedQuickUnion uf(n);

	// Connect them
	uf.ft_union(0, 6);
	uf.ft_union(5, 0);
	uf.ft_union(1, 2);
	uf.ft_union(7, 1);
	uf.ft_union(1, 0);
	uf.ft_union(3, 4);
	uf.ft_union(8, 3);
	uf.ft_union(9, 8);
	uf.ft_union(8, 1);


	// Same graph
	// uf.ft_union(3, 4);
	// uf.ft_union(8, 4);
	// uf.ft_union(9, 4);
	// uf.ft_union(0, 6);
	// uf.ft_union(5, 6);
	// uf.ft_union(1, 2);
	// uf.ft_union(7, 2);
	// uf.ft_union(2, 6);
	// uf.ft_union(4, 6);

	int *id = uf.getId();
	std::cout << "| ";
	for (int i = 0; i < n; i++)
			std::cout << "id[" << std::to_string(i) << "] | ";
	std::cout << std::endl << "| ";
	for (int i = 0; i < n; i++)
			std::cout << "   " << std::to_string(id[i]) << "  | ";
	std::cout << std::endl;
	return 0;
}
