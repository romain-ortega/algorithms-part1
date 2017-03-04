#include "QuickUnion.hpp"
QuickUnion::QuickUnion(unsigned int n) {
	this->_id = new int[n];
	for (unsigned int i = 0; i < n; i++)
		this->_id[i] = i;
}
QuickUnion::QuickUnion(const QuickUnion &ref) { *this = ref; };

QuickUnion & QuickUnion::operator=(const QuickUnion &ref) {
	this->_id = ref.getId();
	return *this;
};
QuickUnion::~QuickUnion() {}

// Return root
int QuickUnion::root(int i) const {
	while (this->_id[i] != i) i = this->_id[i];
	return i;
}

// Check if p and q have the same root
bool QuickUnion::find(int p, int q) {
	return (this->root(p) == this->root(q));
}

// Merge two components
void QuickUnion::ft_union(int p, int q) {
	int root_p = root(p);
	int root_q = root(q);
	this->_id[root_p] = root_q;
}

int *QuickUnion::getId() const { return this->_id; }
