#include <iostream>
#include "UF.hpp"

UF::UF(int n) : _n(n) {
	this->_id = new int[n];
	for (int i = 0; i < n; ++i) {
		this->_id[i] = i;
	}
}
UF::UF(const UF & ref) { *this = ref; }
UF::~UF() {}
UF & UF::operator=(const UF &ref) {
	this->_id = ref.getId();
	this->_n = ref.getN();
	return *this;
}
bool UF::connected(int p, int q) {
	return this->_id[p] == this->_id[q];
}
void UF::ft_union(int p, int q) {
	int pid = this->_id[p];
	int qid = this->_id[q];
	for (int i = 0; i < this->_n; ++i) {
		if (this->_id[i] == pid)
			this->_id[i] = qid;
	}
}

int *UF::getId() const { return this->_id; }
unsigned int UF::getN() const { return this->_n; }