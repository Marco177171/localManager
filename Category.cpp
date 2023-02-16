#include "Category.hpp"

Category::Category() : _name("general")
{}

Category::Category(std::string name) : _name(name)
{}

Category::Category(Category const &source) : _name(source._name)
{}

Category::~Category()
{}

std::string Category::getName()
{
	return (this->_name);
}