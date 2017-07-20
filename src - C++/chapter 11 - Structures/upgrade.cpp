struct EnemySpaceShip {
	int x_coordinate;
	int y_coordinate;
	int weapon_power;
};
/*
 * This function will make a copy of the ship local variable
 * that it returns. It will copy every field of the structure
 * into a new variable.
 */
EnemySpaceShip getNewEnemy() {
	EnemySpaceShip ship;
	ship.x_coordinate = 0;
	ship.y_coordinate = 0;
	ship.weapon_power = 20;
	return ship;
}

EnemySpaceShip upgradeWeapons(EnemySpaceShip ship) {
	ship.weapon_power += 10;
	return ship;
}

int main() {
	EnemySpaceShip enemy = getNewEnemy();
	enemy = upgradeWeapons(enemy);
}