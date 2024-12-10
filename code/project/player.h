#ifndef PLAYER_H
#define PLAYER_H
#include "train.h"
#include "person.h"

struct Player {
    Train* aurora;
    int maxEnergy;
    int energy;
    int day {1};
    int moral;

    Player() {
        // Creating the train
        aurora = new Train();
        aurora->head->name = "locomotive";
        maxEnergy = 10;
        energy = maxEnergy;

        // Adding crew
        Person* miller = new Person();
        miller->name = "Miller";
        miller->info = "Miller, the commander of our crew and Anna's father. Exiled from Moscow on treason charges, "
                       "now he is looking for a place to settle down in the East.";
        aurora->crew.insert(miller->name, miller);

        Person* anna = new Person();
        anna->name = "Anna";
        anna->info = "Anna, the commander's daughter and the Order's best sniper.";
        aurora->crew.insert(anna->name, anna);

        Person* duke = new Person();
        duke->name = "Duke";
        duke->info = "Igor, also known as the Duke, is eager to go on any mission, no matter the danger. Always the "
                     "first to volunteer.\n We happen to share the same blood type.";
        aurora->crew.insert(duke->name, duke);

        Person* damir = new Person();
        damir->name = "Damir";
        damir->info = "Damir is one of the best Rangers we have. Despite his acheivements, he's always been humble... "
                      "perhaps he is shy. Being one of the only non-Russians aboard, maybe he feels out of place.\n"
                      "We happen to share the same blood type.";
        aurora->crew.insert(damir->name, damir);

        Person* alyosha = new Person();
        alyosha->name = "Alyosha";
        alyosha->info = "Alyosha worked as a guard in Polis for the longest time, but decided to join the Order for new "
                        "adventures. Such adventures excite him and being a scout, his survival knowledge is invaluable.\n"
                        "We happen to share the same blood type.";
        aurora->crew.insert(alyosha->name, alyosha);

        Person* yermak = new Person();
        yermak->name = "Yermak";
        yermak->info = "Yermak is the train engineer. Used to work under Hansa but became fed up with they way they did "
                       "things. To be fair, who wouldn't? Thus, he helped us escape them and... acquire their train.";
        aurora->crew.insert(yermak->name, yermak);
    }

    ~Player() {
        std::cout << "Player destructor called." << std::endl;
        delete aurora;
    }
};

#endif // PLAYER_H
