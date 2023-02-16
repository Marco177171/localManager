#include "Performer.hpp"

Performer::Performer() : _name("General Performer"), _category(), _engagementPrice(100)
{}

Performer::Performer(std::string name, Category &category, float engagementPrice) : _name(name), _category(category), _engagementPrice(engagementPrice)
{}

Performer::Performer(Performer const &source) : _name(source._name), _category(source._category), _engagementPrice(source._engagementPrice)
{}

Performer::~Performer()
{}

std::string Performer::getName()
{
	return (this->_name);
}