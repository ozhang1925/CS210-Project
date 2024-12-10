#ifndef LEVELS_H
#define LEVELS_H

#include "location.h"
#include "person.h"
#include "player.h"
#include "queue"

struct Levels {
    std::queue<Location*> levels;
    Player* player;

    Levels() {
        // Create the player and train
        player = new Player();

        // Creating a new Location
        Location* moscow = new Location(0, 0);
        levels.push(moscow);

        Location* volga = new Location(3, 775);

        // Home is the main central node of graph
        Home* home = new Home();
        volga->addVertex(home);

        // First place to go
        CPlace* church = new CPlace();
        church->name = "church";
        church->energyCost = 5;
        church->text = "We went to the church, but the locals aren't so friendly. They tried to trap us, but failed. "
                       "We rescued Katya, a captive of these lunatics, and snuck out of there.\n\n"
                       "Lost 5 energy.\n\n"
                       "Katya and Nastya has joined the crew.\n\n"
                       "Incoming transmission:\n"
                       "Miller: Hey, we've lost sight of Anna near the radio towers. Go check it out.";
        Person* katya = new Person();
        katya->name = "Katya and Nastya";
        katya->info = "Katya is a trained nurse and travelled to the Volga with her daughter Nastya along with a caravan. Somehow, they got stuck here and were taken in by the locals. "
                      "The rest of the caravan was wiped out, either by bandits or by being exiled, and they were the only survivors.";
        katya->dialog->root->text = "Thank you for getting us out of that church, we've been stuck in that room for God knows how long.\n\n"
                                    "1. About your caravan\n"
                                    "2. About the villagers";
        DialogNode* create = new DialogNode();
        create->text = "We had a traincar full of people, but Silantus tried them for being heritics one by one and exiled them into the wilderness. None of them "
                       "made it back, including my husband...\n\n"
                       "1. About your husband\n"
                       "2. About Silantus";
        katya->dialog->root->one = create;
        create = new DialogNode();
        create->text = "My husband was a doctor and helped me train as a nurse. Silantus exiled him for being a heretic, with his sentence being to fight an electrical "
                       "anomaly! Could you believe it!? It's a death sentence!\n\n"
                       "1. My condolences...";
        katya->dialog->root->one->one = create;
        create = new DialogNode();
        create->text = "Silantus is the preacher and leader of the villagers. He spouts this nonsense of electricity and techonology being the work of the devil, who knows "
                       "if he even believes it! All I know is that he's a murderer, sending his people out to 'fight' anomalies and mutants.\n\n"
                       "1. I see...";
        katya->dialog->root->one->two = create;
        create = new DialogNode();
        create->text = "The villagers believe technology to be the spawn of satan, they won't have anything to do with it. They dislike people who use technology. "
                       "Heretics, they call them. They won't attack you for the most part, but the Bridge Guard have weapons and are at Silantus's beck and call.\n\n"
                       "1. I see...";
        katya->dialog->root->two = create;

        church->person = katya;
        volga->addVertex(church);
        volga->addEdge(home,church);

        DPlace* radDump = new DPlace();
        radDump->name = "radDump";
        radDump->energyCost = 3;
        radDump->text = "Anna fell into a hole marked by a red t-shirt. Must've mistaken it for an enemy flag. "
                        "This place seems to be a waste dump. Anna didn't have her mask on and was coughing. "
                        "Hopefully it's not too serious, the waste has been here for a long time after all...\n\n"
                        "Lost 3 energy.\n\n"
                        "Incoming transmission:\n"
                        "Yermak: Katya told us about a mechanic Krest near the crane. Recruiting him will be a great help with repairs.";
        volga->addVertex(radDump);
        volga->addEdge(church,radDump);

        CPlace* crane = new CPlace();
        crane->name = "crane";
        crane->energyCost = 3;
        crane->text = "I went to find this mechanic Krest at the crane near the docks. He had made a nice place for himeself. "
                      "Luckily, he was eager to join our crew. His help should speed up the Aurora's repairs.\n\n"
                      "Lost 3 energy.\n\n"
                      "Krest joined the crew.\n\n"
                      "Incoming transmission:\n"
                      "Krest: I've got a railcar parked at the terminal. Help get it back and I'll make it worth the effort. Plus, you can "
                      "tow Katya's train carriage back with it.";
        Person* krest = new Person();
        krest->name = "Krest";
        krest->info = "A mechanic who came to the Volga in hopes of trading. The locals sent him fight the electrical anomalies as punishment for using a flashlight. "
                      "Luckily, he's good with his hand and was able to make a number of hideouts to survive.";
        krest->dialog->root->text = "Nice to meet you. The locals didn't like my profession, being afraid of electricity and all. It's not so bad here, "
                                    "but I'd like to get a change of pace.";
        crane->person = krest;
        volga->addVertex(crane);
        volga->addEdge(radDump,crane);

        DPlace* terminal = new DPlace();
        terminal->name = "terminal";
        terminal->energyCost = 5;
        terminal->text = "Katya told us that there is a carriage in the terminal. This solves our need of sleeping atop the coalbox! Krest's "
                         "railcar helped to tow it back to the Aurora. Now, it'll really look like a train.\n\n"
                         "Lost 5 energy.\n\n"
                         "Railcar and carriage added to the Aurora.\n\n"
                         "Incoming transmission:\n"
                         "Miller: Krest and Yermak got the train back up and running again. See if you can lower the bridge and we'll be out of here.";
        volga->addVertex(terminal);
        volga->addEdge(crane, terminal);

        EPlace* bridge = new EPlace();
        bridge->person = "Duke";
        bridge->name = "bridge";
        bridge->energyCost = 7;
        bridge->text = "As expected, the locals weren't too keen on letting the bridge down for us. Duke and I had to sneak in and jump their leader to get the "
                       "bridge down. Luckily, he was a smart guy and lowered the bridge. We jumped onto the Aurora from the control room as it passed by.\n\n"
                       "Level complete! Go back to the main map and press 'continue' to go to the next level.";
        bridge->altText = "As expected, the locals weren't too keen on letting the bridge down for us. Duke and I had to sneak in and jump their leader to get the "
                          "bridge down. Unfortunately, Silantus sounded the alarm and Duke was shot. He insisted I jump without him, since he needed to keep the lever down...\n"
                          "Damn...\n\nDuke has left the crew.\n\n"
                          "Level complete! Go back to the main map and press 'continue' to go to the next level.";
        volga->addVertex(bridge);
        volga->addEdge(terminal,bridge);

        // Rest place
        Safehouse* traincar = new Safehouse();
        traincar->name = "traincar";
        traincar->text = "You've rested, today is a new day.";
        volga->addVertex(traincar);
        volga->addEdge(home, traincar);

        // Other places
        MPlace* banditTower = new MPlace();
        banditTower->name = "banditTower";
        banditTower->energyCost = 5;
        banditTower->text = "The guitar noises were coming from a power tower converted into a bandit base. There was a villager trapped at the base of the tower. I cleared out "
                            "the bandits from the area and freed the villager. I also retreived the guitar, Alyosha would enjoy this.\n\n"
                            "Lost 5 energy.";
        volga->addVertex(banditTower);
        volga->addEdge(home, banditTower);

        MPlace* banditCamp = new MPlace();
        banditCamp->energyCost = 6;
        banditCamp->name = "banditTower";
        banditCamp->text = "I came across a building on a lake, turns out it was a bandit camp. There were more villagers trapped here, I believe the bandits trade them as slaves "
                            "when traders arrive. Of course, I dealt with the bandits and freed the villagers. They seemed grateful, even if I was in cahoots with the Devil with my "
                            "technology.\n\n"
                           "Lost 6 energy.";
        volga->addVertex(banditCamp);
        volga->addEdge(home, banditCamp);

        MPlace* oilTank = new MPlace();
        oilTank->name = "oilTank";
        oilTank->energyCost = 4;
        oilTank->text = "Nastya's teddy bear was taken away by a Demon, so of course it would be in it's den. Fortunately, it must've been out hunting when I arrived. I was able to "
                        "retrieve the bear safetly, although it seems to have some 'battle scars' from the Demon's teeth.\n\n"
                        "Lost 4 energy.";
        volga->addVertex(oilTank);
        volga->addEdge(home, oilTank);

        levels.push(volga);

        Location* caspian = new Location(36, 3901);

        Home* homeCas = new Home();
        caspian->addVertex(homeCas);

        DPlace* village = new DPlace();
        village->name = "village";
        village->energyCost = 4;
        village->text = "A sandstorm rolled when I arrived at the building the car parked at, could barely see my own hands. The driver ambushed me when I reached the top floor, but "
                        "I was able to knock him out. I took the keys to his car.\n\n"
                        "Lost 4 energy.\n\n"
                        "Incoming transmission:\n"
                        "Miller: We got a radio call from the lighthouse from a person named Guil. She says she has information about the satellite station I was talking about, meet with "
                        "her and try to get the maps.";
        caspian->addVertex(village);
        caspian->addEdge(homeCas, village);

        DPlace* lighthouse = new DPlace();
        lighthouse->name = "lighthouse";
        lighthouse->energyCost = 6;
        lighthouse->text = "The lighthouse was under seige by some bandits, the 'Munai-Bailer' as Guil calls them. Apparently they have been slaving Guil's people in this area for a long "
                           "time. After fighting them off, Guil led us into the satellite station. I was able to retrieve a map and return to the Aurora.\n\n"
                           "Lost 6 energy.\n\n"
                           "Incoming transmission:\n"
                           "Damir: There's a well just up the road where the slavers get their water. Lets go there and steal a water truck.";
        caspian->addVertex(lighthouse);
        caspian->addEdge(village, lighthouse);

        DPlace* oasis = new DPlace();
        oasis->name = "oasis";
        oasis->energyCost = 5;
        oasis->text = "Damir and I snuck into the camp the slavers set up near the well. They had no idea we were their until I reached the control room and opened the gate. I jumped "
                      "down onto the water truck Damir stole as he gunned it. Now our crew should be back in action in no time!\n\n"
                      "Lost 5 energy.\n\n"
                      "Incoming transmission:\n"
                      "Miller: Yermak just told us that the Aurora is equipped with diesel injectors. Seeing the cars around here, diesel is probably a lot easier to acquire than coal. "
                      "Guil told us of a oil tanker near the derrick. See if you can negotiate with the Baron and retrive the tanker.";
        caspian->addVertex(oasis);
        caspian->addEdge(lighthouse, oasis);

        EPlace* oil = new EPlace();
        oil->person = "Damir";
        oil->name = "oil";
        oil->energyCost = 8;
        oil->text = "Damir, Guil, and I infiltrated the oil derrick to meet with the Baron while Anna watched though a scope. Halfway through, Guil went missing. The Baron wanted to exchange "
                    "Guil for oil and the promise of safe passage. Out of nowhere, Guil ambushed him and we had a firefight with the guards. The Baron tried to choke me, but Anna picked him "
                    "off from a distance. Giul thanked us and left soon after, saying that her fight has only just started. Damir looked split, these were his people after all, but decided "
                    "to continue with us.\n\n"
                    "Level complete! Go back to the other tab and press 'Continue' to go to the next level.";
        oil->altText = "Damir, Guil, and I infiltrated the oil derrick to meet with the Baron while Anna watched though a scope. Halfway through, Guil went missing. The Baron wanted to exchange "
                       "Guil for oil and the promise of safe passage. Out of nowhere, Guil ambushed him and we had a firefight with the guards. The Baron tried to choke me, but Anna picked him "
                       "off from a distance. Giul thanked us and left soon after, saying that her fight has only just started. Damir decided to go with Guil, these were his people after all. "
                       "I don't blame him but it's a bit sad seperating after all this time...\n\nDamir has left the crew.\n\n"
                       "Level complete! Go back to the other tab and press 'Continue' to go to the next level.";
        caspian->addVertex(oil);
        caspian->addEdge(oasis, oil);

        Safehouse* boat = new Safehouse();
        boat->name = "boat";
        caspian->addVertex(boat);
        caspian->addEdge(home, boat);

        MPlace* ship = new MPlace();
        ship->name = "ship";
        ship->energyCost = 3;
        ship->text = "There was a shipbreaking operation here. The bandits had slaves working with pickaxes to collect the scrap metal. I took out the bandits and effectively freed the workers, "
                     "though I'm not sure if they know it...\n\n "
                     "Lost 3 energy.";
        caspian->addVertex(ship);
        caspian->addEdge(home, ship);

        MPlace* jail = new MPlace();
        jail->name = "jail";
        jail->energyCost = 3;
        jail->text = "This abandoned ship had been converted into a jail and fighting ring. The bandits would pit slaves against each other and have them fight, a horrific sight indeed. Of course, "
                     "I took out the bandits at location and opened the slave's cages. I hope Guil can win this fight.\n\n"
                     "Lost 3 energy.";
        caspian->addVertex(jail);
        caspian->addEdge(home, jail);

        MPlace* sniper = new MPlace();
        sniper->name = "sniper";
        sniper->energyCost = 5;
        sniper->text = "The crane here was home to a sniper nest. I infiltrated it while Anna provided support from the west. With the bandits gone, this tower will be useful for reconaissance. It's "
                       "easily the tallest place in the area.\n\n"
                       "Lost 5 energy.";
        caspian->addVertex(sniper);
        caspian->addEdge(home, sniper);

        levels.push(caspian);

        Location* deadCity = new Location(63, 7514);

        Home* homeDC = new Home();

        DPlace* entrance = new DPlace();
        entrance->name = "entrance";
        entrance->energyCost = 2;
        entrance->text = "Miller and I left to find an entrance into the city's subway. From there, we'll head to the medical institute where the cure is hopefully located.\n\n"
                        "Lost 2 energy.\n\n"
                        "Incoming transmission:\n"
                        "Miller: What a strange place, looks like there were survivors but now they're all gone. Lets continue.";
        deadCity->addVertex(entrance);
        deadCity->addEdge(homeDC, entrance);

        CPlace* under = new CPlace();
        under->name = "under";
        under->energyCost = 2;
        under->text = "We came across a boy named Kirill who is the only person we've found this whole time. He told us how the radiation in the city had spread underground and of a "
                      "planned evacuation. He was still here waiting for his dad, a commander whose gone to find maps to leave. Miller decided to go after "
                      "his dad, looking for the maps.\n\n"
                      "Lost 2 energy.\n\n"
                      "Kirill has joined the crew.\n\n"
                      "Incoming transmission:\n"
                      "Miller: Continue to the institute. If I can find some of that 'green stuff' we'll heighten our chances of survival.";
        Person* kirill = new Person();
        kirill->name = "Kirill";
        kirill->info = "A boy about the age of 12. The only person we found surviving at Novosibirsk.";
        kirill->dialog->root->text = "The subway was not in good condition, but we were able to survive with the 'green stuff.' However, people started rioting when we started to run out.\n\n"
                                     "1. About the 'green stuff'.";
        create = new DialogNode();
        create->text = "The 'green stuff' was a radiation drug distributed by OSKOM. When supply dried up people thought that OSKOM was keeping the drug for themselves, leading to rioting. That along "
                       "with mutant raids left my dad and I as the last survivors here.\n\n"
                       "1. About your dad.\n"
                       "2. About OSKOM.";
        kirill->dialog->root->one = create;
        create = new DialogNode();
        create->text = "My dad is a Lieutenant-Colonel at OSKOM. After everyone else left, he started making trips to the SATCOM center to look for maps. He hasn't come back from his last trip though. "
                       "I'm afraid he's...\n\n1. I see...";
        kirill->dialog->root->one->one = create;
        create = new DialogNode();
        create->text = "OSKOM was a unit made for emergency protection and evacuation of the city in case of disaster. When the war started, OSKOM became the governing body of the metro.\n\n"
                       "1. I see...";
        kirill->dialog->root->one->two = create;
        under->person = kirill;
        deadCity->addVertex(under);
        deadCity->addEdge(entrance, under);

        DPlace* above = new DPlace();
        above->name = "above";
        above->energyCost = 2;
        above->text = "I've made it to the closes station to the institute. Things aren't looking good though, my geiger counter has been going through the roof and I'm running out of "
                      "the radiation drug. I'm starting to see hallucinations, but if I just push a bit more I'll be able to get the cure...\n\n"
                      "Lost 2 energy.";
        deadCity->addVertex(above);
        deadCity->addEdge(under, above);

        DPlace* institute = new DPlace();
        institute->name = "institute";
        institute->energyCost = 2;
        institute->text = "I've made it to the institute and gotten my hands on the cure. Miller picked me up with the car and I barely got in. I know I can't go unconscious now, but I'm so sleepy...\n\n"
                          "Lost 2 energy.";
        deadCity->addVertex(institute);
        deadCity->addEdge(above, institute);

        EPlace* exit = new EPlace();
        exit->name = "exit";
        exit->energyCost = 2;
        exit->text = "You shouldn't be seeing this...";
        exit->altText = "Kirill woke me up, Miller had collapsed on the wheel. I took over the controls to try to get us to where the Aurora is. I drove through a highway filled with abandoned cars and "
                        "made it to some tracks, but... I can't go any farther...\n\nMiller has left the crew.\n\n"
                        "Level complete! Go back and press 'Continue' to go to the next level.";
        exit->person = "Miller";
        deadCity->addVertex(exit);
        deadCity->addEdge(institute, exit);

        levels.push(deadCity);

        Location* irkutsk = new Location(73, 9211);

        Home* homeIr = new Home();
        homeIr->name = "homeIr";
        irkutsk->addVertex(homeIr);

        Point* end = new Point();
        end->name = "end";
        end->text = "Irkutsk.\nYou've suffered a lot of radiation poisioning from your time in Novosibirsk. However, the crew was able to successfully preform a life-saving blood transfusion "
                       "thanks to those with the same blood type. Anna is now cured of her disease and the crew decides to settle down at a lakeside near Irkutsk. Miller... didn't make it, but "
                       "it was thanks to him and the maps be brought back that the crew was able to find this place. He will always be remembered, at least by the crew.\n\n"
                       "Congrats! You've reached the end of the game.";
        end->altText = "Irkutsk.\nYou have reached the end of your journey. The crew didn't have enough people of the same blood type to perform the blood transfusion needed to save you "
                          "from the radiation you've contracted in Novosibirsk. However, Anna is now cured of her disease. The rest of the crew has continued to a lakeshore near "
                          "Irkutsk, where they will finally settle down. You'll always be rememberd, along with Miller.\n\n"
                          "Congrats! You've reached the end of the game.";

        irkutsk->addVertex(end);
        irkutsk->addEdge(homeIr, end);

        levels.push(irkutsk);
    }

    ~Levels() {
        std::cout << "Levels destructor called." << std::endl;
        // at this point all the locations should already be deleted.
        delete player;
    }

    void setVolgaDialog() {
        player->aurora->crew["Miller"]->dialog->root->text = "The barricade we ran into may have only had old men, but that's the forward guard! They could've put women and children "
                                                             "there!\n\n1. If you say so...";
        player->aurora->crew["Anna"]->dialog->root->text = "We see the locals here as lunatics, deeming electricity as the Devil's curse. However, they've been able to survive for this "
                                                           "long, who are us to tell them if they're right or wrong? \n\n1. I guess your right...";
        player->aurora->crew["Alyosha"]->dialog->root->text = "Those villagers are a bit crazy, but they've got some good survival skills to survive for this long. \n\n1. I suppose.";
        player->aurora->crew["Damir"]->dialog->root->text = "Hey man, be careful out there. This is the first time we've been outside of the Metro, so proceed with caution. Good luck!\n\n"
                                                            "1. Thanks...";
        player->aurora->crew["Duke"]->dialog->root->text = "The commander always sends you on the most thrilling missions, it's no fair! Does he favor you, or is he trying to get you killed? "
                                                           "Haha! \n\n 1. Maybe a bit of both...";
        player->aurora->crew["Yermak"]->dialog->root->text = "Blasted piston! This'll take me a month to fix!\n\n 1. ...";
    }

    void setCaspianDialog() {
        player->aurora->crew["Miller"]->dialog->root->text = "This place should be a lakeside if the map is to be believed. We're not prepared for this environment, we're out of water and "
                                                             "running out of coal.\n\n1. I'll see what I can do...";
        player->aurora->crew["Anna"]->dialog->root->text = "Damn this heat -*cough*- and this sand too. I can't stand it here, I want out as soon as possible.\n\n1. I agree...";
        player->aurora->crew["Alyosha"]->dialog->root->text = "Hey man, you doing alright? If your looking for water I just gave my last drop to Nastya. \n\n1. Don't push yourself to hard...";
        player->aurora->crew["Yermak"]->dialog->root->text = "We won't make it out of this desert with how much coal we have. The Aurora is equipped with diesel injectors in the fuelbox however."
                                                             "\n\n1. I'll see if I can get some...";
        player->aurora->crew["Krest"]->dialog->root->text = "...\n\n1. Probably shouldn't bother him...";

        player->aurora->crew["Damir"]->dialog->root->text = "You've found a nice car man, this'll surely come in useful.\n\n1. About the slavers.\n2. About the slaves.";
        DialogNode* create = new DialogNode();
        create->text = "The slavers seem to have been here for a while. Their leader is the Baron. Based on what Guil calls them, I'd guess that they are descendent of the oilmen of this area before the war. "
                       "Damn bastards, taking advantage of the locals...\n\n1. I see...";
        player->aurora->crew["Damir"]->dialog->root->one = create;
        create = new DialogNode();
        create->text = "Guil said that the bandits convinced the locals here to work under them in exchange for protection. It wasn't long before the bandits would take advantage of the situation, "
                       "creating a faux religion to brainwash the slaves. It seems that the older generation who were able to deny this were mostly wiped out and the new generation believe the hoax."
                       "\n\n1. About yourself.";
        player->aurora->crew["Damir"]->dialog->root->two = create;
        create = new DialogNode();
        create->text = "My family originally came from this region, so I feel connected to the people here. I cannot bear to see them live like this. Guil is only one person, she may not be able to "
                       "fight against all the bandits herself...\n\n 1. I see...";
        player->aurora->crew["Damir"]->dialog->root->two->one = create;


        delete player->aurora->crew["Katya and Nastya"]->dialog->root->one->one;
        delete player->aurora->crew["Katya and Nastya"]->dialog->root->one->two;
        delete player->aurora->crew["Katya and Nastya"]->dialog->root->two;
        delete player->aurora->crew["Katya and Nastya"]->dialog->root->one;
        player->aurora->crew["Katya and Nastya"]->dialog->root->one = nullptr;
        player->aurora->crew["Katya and Nastya"]->dialog->root->two = nullptr;
        player->aurora->crew["Katya and Nastya"]->dialog->root->text = "The crew won't last long without water, we need some as soon as possible.\n\n1. I got it...";

        if (player->aurora->crew.contains("Duke")) {
            player->aurora->crew["Duke"]->dialog->root->text = "It's been tough without much water here. I'll trust that you'll be able to get us more though!\n\n1. Thanks...";
        }
    }

    void setCityDialog() {
        player->aurora->crew["Miller"]->dialog->root->text = "We must make it to the institute to save my daughter.\n\n1. Lets go...";
        player->aurora->crew["Anna"]->dialog->root->text = "...\n\n1. I shouldn't disturb her...";
        player->aurora->crew["Alyosha"]->dialog->root->text = "Good luck out there, we'll be waiting for your return. \n\n1. Thanks...";
        player->aurora->crew["Yermak"]->dialog->root->text = "We'll be one our way, we need to get the snowplow from the Railroad Museum."
                                                             "\n\n1. Good luck...";
        player->aurora->crew["Krest"]->dialog->root->text = "We've covered the car with lead plates, but try not to stay out there too long. \n\n1. Alright...";
        player->aurora->crew["Katya and Nastya"]->dialog->root->text = "Don't worry, Anna will be fine for the time being. She's sleeping but her breathing and heart rate "
                                                                       "are nominal.\n\n1. Got it...";

        if (player->aurora->crew.contains("Duke")) {
            player->aurora->crew["Duke"]->dialog->root->text = "You better not die out there! We'll be waiting for your return. \n\n1. Alright...";
        }
        if (player->aurora->crew.contains("Damir")) {
            delete player->aurora->crew["Damir"]->dialog->root->one;
            delete player->aurora->crew["Damir"]->dialog->root->two->one;
            delete player->aurora->crew["Damir"]->dialog->root->two;
            player->aurora->crew["Damir"]->dialog->root->one = nullptr;
            player->aurora->crew["Damir"]->dialog->root->two = nullptr;
            player->aurora->crew["Damir"]->dialog->root->text = "It's going to be hard out there, be careful.\n\n1. Will do...";
        }
    }
};

#endif // LEVELS_H
