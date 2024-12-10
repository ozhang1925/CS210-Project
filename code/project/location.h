#ifndef GAME_H
#define GAME_H
#include <map>
#include <vector>
#include <QString>
#include "player.h"

struct Point {
    std::string name;
    QString text; // to be displayed upon reaching a location
    QString altText;
    bool done;
    int energyCost;

    Point() {
        energyCost = 0;
        done = false;
    }

    virtual ~Point() {
        std::cout << "Point destructor called." << std::endl;
    };

    virtual void event(Player* player) {
        // get rid of warning: "unused parameter 'player'"
        player->energy += 0;
    }

    QString checkEnergy(Player* player) {
        if (player->energy < energyCost) {
            return "You do not have enough energy.\n\n"
                   "Go to 'H' to reset your energy.\n\n"
                   "Energy required: " + QString::number(energyCost);
        }
        event(player);
        done = true;
        return text;
    }
};

struct Home : public Point {
    Home() {
        name = "home";
    }
};

// standard enemy place
struct DPlace : public Point {
    void event(Player* player) {
        player->energy -= energyCost;
    };
};

// place where a character can be added to the crew
struct CPlace : public Point {

    // this will be set in levels.h
    Person* person;

    void event(Player* player) {
        player->energy -= energyCost;
        // add character to crew
        player->aurora->crew.insert(person->name, person);
    }

};

// place where the player can earn morality points
struct MPlace : public Point {
    void event(Player* player) {
        player->energy -= energyCost;
        player->moral++;
    }
};

// last point on the level
struct EPlace : public Point {

    // this will be set in levels.h
    QString person;

    void event(Player* player) {
        player->energy -= energyCost;
        if (player->moral < 2) {
            text = altText;
            player->aurora->crew.remove(person);
        }
    }
};

struct Safehouse : public Point {
    Safehouse () {
        // player should always be able to use the safehouse
        energyCost = -1;
    }
    void event(Player* player) {
        player->energy = player->maxEnergy;
        player->day++;
    }
};

// Location as a graph
struct Location {
    int addDay;
    int km;
    int moral;
    std::map<std::string, std::vector<Point*>> points;

    Location (int day, int distance) {
        addDay = day;
        km = distance;
        moral = 0;
    }

    ~Location () {
        std::cout << "Location destructor called." << std::endl;
        for (std::pair<const std::string, std::vector<Point*>> &place : points) {
            while (!place.second.empty()) {
                delete place.second.back();
                place.second.pop_back();
            }
        }
    }

    // adjacency-list styled graph
    void addVertex(Point* vertex) {
        points[vertex->name] = {};
    }

    void addEdge(Point* p1, Point* p2) {
        points[p1->name].push_back(p2);
    }
};

#endif // GAME_H
