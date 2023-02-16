#include "Category.hpp"
#include "Event.hpp"
#include "Performer.hpp"
#include "Person.hpp"
#include "ListPlace.hpp"
#include "Place.hpp"
#include "Player.hpp"
#include "Product.hpp"

void initPlayer(ListPlace &list)
{
	Player player;
	player.pickPlace(list);
}

void initGame()
{
	ListPlace listPlace;
	initPlayer(listPlace);
	Category rock("Rock");
	Category hipHop("Hip Hop");
	Category electronic("Electronic");
	Category jazz("Jazz");
	Category classic("Classic");
	Performer metallica("Metallica", rock, 1000);
	Performer tupac("Tupac", hipHop, 1000);
	Performer kalkbrenner("Paul Kalkbrenner", electronic, 1000);
	Performer baker("Chet Baker", jazz, 1000);
	Performer liszt("Liszt", classic, 1000);
}

void play()
{
	briefing();
	organizeNext();

}

int main()
{
	initGame();
	play();
	return (0);
}