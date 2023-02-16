#ifndef PERFORMER_HPP
# define PERFORMER_HPP
# include <iostream>
# include "Category.hpp"

class Performer {
	public:
		Performer();
		Performer(std::string name, Category &category, float engagementPrice);
		Performer(Performer const &source);
		~Performer();
		std::string getName();
	private:
		std::string _name;
		Category const _category;
		float _engagementPrice;
};

#endif
