// this header is needed for NULL; normally it's included
// by other header files, but we don't need any other
// headers here.
#include <cstddef>
#include <stdlib.h>
#include <iostream>

struct EnemySpaceShip {
	int x_coordinate;
	int y_coordinate;
	int weapon_power;
	EnemySpaceShip* p_next_enemy;
};

EnemySpaceShip* p_enemies = NULL;

EnemySpaceShip* getNewEnemy() {
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship -> x_coordinate = 0;
	p_ship -> y_coordinate = 0;
	p_ship -> weapon_power = 20;
	p_ship -> p_next_enemy = p_enemies;
	p_enemies = p_ship;
	return p_ship;
}

void upgradeWeapons(EnemySpaceShip* p_ship) {
	p_ship -> weapon_power += 10;
}

void displayEnemyShips(EnemySpaceShip* ships) {
	int count = 1;
	while (ships != NULL) {  
		std::cout << "Ship " << count << ": " << std::endl;
		std::cout << "\tx pos: " << ships->x_coordinate << std::endl;
		std::cout << "\ty pos: " << ships->y_coordinate << std::endl;
		std::cout << "\tweapon power: " << ships->weapon_power << std::endl;
		ships = ships->p_next_enemy;
		count++;
	}
}

int main() {
	EnemySpaceShip* p_enemy_1 = getNewEnemy();
	EnemySpaceShip* p_enemy_2 = getNewEnemy();
	EnemySpaceShip* p_enemy_3 = getNewEnemy();
	EnemySpaceShip* p_enemy_4 = getNewEnemy();
	upgradeWeapons(p_enemy_1);
	upgradeWeapons(p_enemy_4);
	displayEnemyShips(p_enemies);
}