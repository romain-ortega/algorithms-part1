#ifndef UF_H
#define UF_H
# include <iostream>
class WeightedQuickUnion
{
	private:
		int *_id;
		size_t *_sizes;
		unsigned int _n;
		int _root(int i) const;

	public:
		WeightedQuickUnion(unsigned int n);
		WeightedQuickUnion(const WeightedQuickUnion &ref);
		virtual ~WeightedQuickUnion();
		WeightedQuickUnion & operator=(const WeightedQuickUnion &ref);

		bool find(int p, int q);
		void ft_union(int p, int q);
		int *getId() const;
		size_t *getSizes() const;
};
#endif /* UF_H */
