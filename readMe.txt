PacMan!!!!

classes:
	4. walls		{point, shape, color}
	1. pacman		{point, shape, movement vector, color, ctor(), setPacman(), getPacman()}
	2. ghost		{point, shape, movement vector, color, printLastShape()}
	3. breadcrumbs	{point, shape, color}
	5. game logic	{objects and data: pacman, ghost, walls, breadcrumbs, keep all locations(4)
					func: init(),run(),pause(), metAGhost()}
	6. menu			{menu like duh!}
	7. point		{x,y, movement()}

	tasks:
		Sagi:
			- class:: point
			- class:: walls
			- class:: bread
		Idan:
			- class:: pacman
			- class:: ghost
		pair:
			- class:: game engine
