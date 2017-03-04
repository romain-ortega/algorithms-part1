#include "UF.hpp"
#include <iostream>
int main(void)
{
	int n;
	std::cin >> n;

	UF QuickFind(n);
	QuickFind.ft_union(0, 5);
	QuickFind.ft_union(5, 6);
	QuickFind.ft_union(6, 1);
	QuickFind.ft_union(1, 2);
	QuickFind.ft_union(2, 7);

	QuickFind.ft_union(8, 3);
	QuickFind.ft_union(3, 4);
	QuickFind.ft_union(4, 9);

	std::cout << QuickFind.connected(7, 3) << std::endl;
	std::cout << QuickFind.connected(8, 3) << std::endl;
	std::cout << QuickFind.connected(0, 7) << std::endl;
	return 0;
}
