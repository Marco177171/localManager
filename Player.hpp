#ifndef PLAYER_HPP
# define PLAYER_HPP
# include <iostream>
# include "ListPlace.hpp"

class Player {
	public:
		Player();
		Player(std::string name);
		Player(Player const &source);
		~Player();
		std::string getName();
		void pickPlace(ListPlace &list);
	private:
		std::string _name;
		float _budget;
		Place _ownerOf;
};

#endif
