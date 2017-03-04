#include "WeightedQuickUnion.hpp"
WeightedQuickUnion::WeightedQuickUnion(unsigned int n) {
	this->_id = new int[n];
	this->_sizes = new size_t[n];
	for (unsigned int i = 0; i < n; i++) {
		this->_id[i] = i;
		this->_sizes[i] = 1;
	}
}
WeightedQuickUnion::WeightedQuickUnion(const WeightedQuickUnion &ref) { *this = ref; };

WeightedQuickUnion & WeightedQuickUnion::operator=(const WeightedQuickUnion &ref) {
	this->_id = ref.getId();
	this->_sizes = ref.getSizes();
	return *this;
};
WeightedQuickUnion::~WeightedQuickUnion() {}

// Return root
int WeightedQuickUnion::_root(int i) const {
	while (this->_id[i] != i) i = this->_id[i];
	return i;
}

// Check if p and q have the same root
bool WeightedQuickUnion::find(int p, int q) {
	return (this->_root(p) == this->_root(q));
}

// Merge two components
void WeightedQuickUnion::ft_union(int p, int q) {
	int root_p = this->_root(p);
	int root_q = this->_root(q);
	if (root_p == root_q) return;
	if (this->_sizes[root_p] > this->_sizes[root_q]) {
		this->_id[root_q] = root_p;
		this->_sizes[root_p] += this->_sizes[root_q];
	}
	else {
		this->_id[root_p] = root_q;
		this->_sizes[root_q] += this->_sizes[root_p];
	}
}

int *WeightedQuickUnion::getId() const { return this->_id; }
size_t *WeightedQuickUnion::getSizes() const { return this->_sizes; }
