#include "Place.hpp"

Place::Place() : _name("Default Place"), _type("default"), _price(0)
{}

Place::Place(std::string type, float price) : _type(type), _price(price)
{
	this->_name = this->_type;
}

Place::Place(Place const &source) : _name(source._name), _type(source._type), _price(source._price)
{}

Place::~Place()
{}

std::string Place::getName()
{
	return (this->_name);
}

void Place::setName(std::string rename)
{
	this->_name = rename;
}

float Place::getPrice()
{
	return (this->_price);
}