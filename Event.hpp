#ifndef EVENT_HPP
# define EVENT_HPP
# include <iostream>

class Event {
	public:
		Event();
		Event(std::string name);
		Event(Event const &source);
		~Event();
		std::string getName();
	private:
		std::string _name;
};

#endif
