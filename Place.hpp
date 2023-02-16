#ifndef PLACE_HPP
# define PLACE_HPP
# include <iostream>

class Place {
	public:
		Place();
		Place(std::string type, float price);
		Place(Place const &source);
		std::string getName();
		void setName(std::string rename);
		float getPrice();
		~Place();
	private:
		std::string _name;
		std::string _type;
		float _price;
};

#endif
