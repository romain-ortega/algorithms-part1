#include <iostream>
#include "QuickUnion.hpp"
int main(void)
{
	int n;
	std::cin >> n;
	QuickUnion uf(n);

	// Connect them
	uf.ft_union(6, 5);
	uf.ft_union(5, 0);
	uf.ft_union(0, 1);
	uf.ft_union(1, 8);
	uf.ft_union(2, 1);
	uf.ft_union(4, 3);
	uf.ft_union(3, 8);
	uf.ft_union(9, 8);

	// What is their root
	std::cout << uf.root(6) << std::endl;
	std::cout << uf.root(8) << std::endl;
	std::cout << uf.root(4) << std::endl;
	std::cout << uf.root(9) << std::endl;

	// Are they connected ?
	std::cout << uf.find(6, 9) << std::endl;
	return 0;
}
