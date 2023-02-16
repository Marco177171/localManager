#ifndef CATEGORY_HPP
# define CATEGORY_HPP
# include <iostream>

class Category {
	public:
		Category();
		Category(std::string name);
		Category(Category const &source);
		~Category();
		std::string getName();
	private:
		std::string _name;
};

#endif
