#ifndef UF_H
#define UF_H
# include <iostream>
# include <map>
class UF
{
	private:
		int *_id;
		unsigned int _n;

	public:
		UF(int n);
		UF(const UF &ref);
		virtual ~UF();
		UF & operator=(const UF &ref);

		bool connected(int p, int q);
		void ft_union(int p, int q);
		int *getId() const;
		unsigned int getN() const;
};
#endif /* UF_H */