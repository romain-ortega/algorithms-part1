#ifndef UF_H
#define UF_H
# include <iostream>
class QuickUnion
{
	private:
		int *_id;
		int _root(int i) const;

	public:
		QuickUnion(unsigned int n);
		QuickUnion(const QuickUnion &ref);
		virtual ~QuickUnion();
		QuickUnion & operator=(const QuickUnion &ref);

		bool find(int p, int q);
		void ft_union(int p, int q);
		int *getId() const;
		unsigned int getN() const;
};
#endif /* UF_H */
