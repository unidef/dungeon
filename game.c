//
//  main.c
//  rpg
//
//  Created by jon on 11/21/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX_LEVEL 10
#define MAX_HP 5000
#define MAX_MANA 150
#define MAX GOLD 100


// CLASSES WARRIOR MAGE
// STILLS ATTACK CAST SPELL
// MONSTERS IMP

int Random(){
    return rand() % 175;
};

struct ID {
    char *name;
    char *class;
    int skill;
};

struct Stats {
    int HP;
    int MANA;
    int LEVEL;
    int GOLD;
    int XP;
};

struct Player {
    struct ID Name;
    struct Stats Player;
};
struct Enemy {
    struct ID Name;
    struct Stats Enemy;
};

struct Boss{
    struct ID Name;
    struct Stats Boss;
};


void Set_Health(int FULLMAX, struct Stats *What){
    if (FULLMAX == 1){
        What->HP = 255;
    }
    if (FULLMAX == 0) {
        What->HP = 0;
    }
}


void Attack(struct Player *One, struct Enemy *Two){
    Two->Enemy.HP = Two->Enemy.HP - Random();
    One->Player.HP = One->Player.HP - Random();
    printf("Player strikes Enemy, Player left with %d hp and boss left with %d hp\n", One->Player.HP, Two->Enemy.HP);
}

void SetDefaults(struct Player *One, struct Enemy *Two, char *playerName){
    One->Player.HP = MAX_LEVEL;
    One->Player.GOLD = 0;
    One->Player.XP = 15;
    One->Name.name = playerName;
    One->Name.class = " attacks ";
    Two->Name.name = "imp";
    Two->Name.class = " shoots a fireball at ";
    
}

int Die (struct Player *X) {
    if (X->Player.HP <100)
{
    printf("You have died");
    return 1;
}

int main(int argc, const char * argv[])
    {

    struct Player P1;
    struct Enemy Dungeon[200];
    
    srand((unsigned)time(NULL));
    int x[10];
    x[0] = 0;
    while (x[0] < 200){
        SetDefaults(P1,Dungeon[x[10]] , "Player ");
    };
    
    x[1] = 0;
    while (Die != 1){
        Attack(P1,Dungeon[x[1]]);
        x[1]++;
    };
        return 0;
    
}

