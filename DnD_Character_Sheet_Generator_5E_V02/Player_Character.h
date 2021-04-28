#include "Header.h"

using namespace std;

class Player_Character
{
private: 

	string Class, Race, Player_Name;
	int Strength, Dexterity, Constitution, Intelligence, Wisdom, Charisma;
	int Hit_Die, Proficiency_Bonus, Level;
	vector<int> Skill_Proficiencies[18];
	vector<int> Saving_Throw_Profs[6];
	int Armor_Class, Movement_Speed, Initiative, Maximum_Hit_Points, Current_Hit_Points, Temporary_Hit_Points;


public: 

	void setStrength(int value)		{ Strength = value; }
	void setDexterity(int value)	{ Dexterity = value; }
	void setConstitution(int value) { Constitution = value; }
	void setIntelligence(int value) { Intelligence = value; }
	void setWisdom(int value)		{ Wisdom = value; }
	void setCharisma(int value)		{ Charisma = value; }

	void setLevel(int value) { Level = value; }

	void setClass(string input) { Class = input; }

	void setCharacterParameters(string Class, int Level) {} //defined in .cpp of this file



};