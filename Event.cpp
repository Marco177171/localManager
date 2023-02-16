#include "Event.hpp"

Event::Event() : _name("Super Event")
{}

Event::Event(std::string name) : _name(name)
{}

Event::Event(Event const &source) : _name(source._name)
{}

Event::~Event()
{}

std::string Event::getName()
{
	return (this->_name);
}