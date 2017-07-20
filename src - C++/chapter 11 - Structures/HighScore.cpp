#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

string name;

struct User {
	int highest;
	int scores[10];
	int index_scores;
	string player;
};	

// functions
User add_user(User[], int index, int numS);
void show_highest_score(User[], int index);
void search_player(User[], int index, string name);
void player_scores(User[], int index);
void show_all_scores(User[], int index);
void list_users(User[], int index);

int main() {
	char quit;
	int choice;
	int numScores = 0;
	int countPlayers = 0;

	User creds[10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			creds[i].scores[j] = 0;
		}
	}
	
	do {
		cout << "\nSCORE MENU" << endl;
		cout << "-----------" << endl;
		cout << "1) Add User\n"
				"2) High Score for each player\n"
				"3) Search for a player\n"
				"4) All Scores\n"
				"5) List of players\n"
				"6) quit\n"
				"Choice: ";
		cin >> choice;

		switch(choice) {
			case 1: 
				cout << "How many scores to enter?" << endl;
				cin >> numScores;
				creds[countPlayers] = add_user(creds, countPlayers, numScores);
				countPlayers++;
				break;

			case 2:
				show_highest_score(creds, countPlayers); 
				break;
			case 3: 
				cout << "Search Player: ";
				cin >> name;
				search_player(creds, countPlayers, name);
				break;
			case 4: 
			case 5:
				list_users(creds, countPlayers); 
				break;
			default: exit(0);
		}


	} while (true);
}

User add_user(User info[], int index, int numS) {
	int temp;

	cout << "Enter player: ";
	getline(cin >> ws, info[index].player);
	info[index].index_scores = numS;
	int score = 0;

	for (int i = 0; i < numS; i++) {
		cout << "Enter score " << i << ": ";
		cin >> score;
		info[index].scores[i] = score;
	}

	for (int k = 0; k < (info[index].index_scores - 1); k++) {
		for (int j = 0; j < (info[index].index_scores - k - 1); j++) {
			if (info[index].scores[j] < info[index].scores[j + 1]) {
				temp = info[index].scores[j];
				info[index].scores[j] = info[index].scores[j + 1];
				info[index].scores[j + 1] = temp;
			}
		}
		info[index].highest = info[index].scores[0];
	}
		

	cin.sync();
	return info[index];
}

/*
 *	Shows the highest score for each user.
 *	
 */
void show_highest_score(User info[], int index) {

	cout << "USER\t\tHIGH SCORE" << endl;
	cout << "---------------------------" << endl;

	for (int i = 0; i < index; i++) {
		cout << info[i].player << "\t\t" << info[i].highest << endl;
	}
}

void search_player(User info[], int index, string name) {
	for (int i = 0; i < index; i++) {
		if (name.compare(info[i].player) == 0) {
			cout << "USER\t\tHIGH SCORE" << endl;
			cout << "---------------------------" << endl;

			cout << info[i].player << "\t\t" << info[i].highest << endl;
		}
		else {
			cout << "Player not found, please try again." << endl;
		}
	}
}

void list_users(User info[], int index) {
	cout << "USERS" << endl;
	cout << "------" << endl;

	for (int i = 0; i < index; i++) {
		cout << info[i].player << endl;
	}
}

