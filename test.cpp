#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;
using namespace std;

// Item class representing items that can be found in rooms or carried by the player
class Item {
public:
    Item(string name, string description) : name(name), description(description) {}

    string getName() const { return name; }
    string getDescription() const { return description; }

private:
    string name;
    string description;
};

// NPC class representing non-player characters in the game
class NPC {
public:
    NPC(string name, string dialogue) : name(name), dialogue(dialogue) {}

    string getName() const { return name; }
    string getDialogue() const { return dialogue; }

private:
    string name;
    string dialogue;
};

// Room class representing different locations in the game world
class Room {
public:
    Room(string name, string description) : name(name), description(description) {}

    void addItem(Item item) { items.push_back(item); }
    void addExit(string direction, Room* room) { exits[direction] = room; }
    void addNPC(NPC npc) { npcs.push_back(npc); }

    string getName() const { return name; }
    string getDescription() const { return description; }

    vector<Item> getItems() const { return items; }
    Room* getExit(string direction) const {
        if (exits.find(direction) != exits.end())
            return exits.at(direction);
        else
            return nullptr;
    }
    vector<NPC> getNPCs() const { return npcs; }

private:
    string name;
    string description;
    vector<Item> items;
    map<string, Room*> exits; // Map of directions to adjacent rooms
    vector<NPC> npcs;
};

// Player class representing the player character
class Player {
public:
    void addItem(Item item) { inventory.push_back(item); }
    void removeItem(Item item) {
        for (auto it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->getName() == item.getName()) {
                inventory.erase(it);
                break;
            }
        }
    }

    vector<Item> getInventory() const { return inventory; }

private:
    vector<Item> inventory;
};

// Main function representing the game loop
int main() {
    // Create rooms
    Room outside("Outside", "You are standing outside a mysterious castle.");
    Room hall("Hall", "You are in a grand hall with many doors.");
    Room kitchen("Kitchen", "You are in a messy kitchen.");
    Room bedroom("Bedroom", "You are in a dusty bedroom.");

    // Create items
    Item sword("Sword", "A sharp sword lies on the ground.");
    Item apple("Apple", "A juicy apple is on the table.");

    // Create NPCs
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");

    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    NPC guard("Guard", "Halt! No one enters the castle without permission.");
    NPC wizard("Wizard", "Welcome, traveler. I have a quest for you.");
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    // Add items and NPCs to rooms
    hall.addItem(sword);
    kitchen.addItem(apple);
    hall.addNPC(guard);
    hall.addNPC(guard);
    outside.addNPC(wizard);

    // Connect rooms with exits
    outside.addExit("north", &hall);
    hall.addExit("south", &outside);
    hall.addExit("east", &kitchen);
    hall.addExit("west", &bedroom);
    kitchen.addExit("west", &hall);
    bedroom.addExit("east", &hall);

    // Initialize player
    Player player;

    // Main game loop
    Room* currentRoom = &outside;
    string command;
    while (true) {
        // Print room description
        cout << "You are in " << currentRoom->getName() << ". " << currentRoom->getDescription() << endl;

        // Print items in the room
        vector<Item> itemsInRoom = currentRoom->getItems();
        if (!itemsInRoom.empty()) {
            cout << "You see the following items: ";
            for (const auto& item : itemsInRoom) {
                cout << item.getName() << ", ";
            }
            cout << endl;
        }

        // Print NPCs in the room
        vector<NPC> npcsInRoom = currentRoom->getNPCs();
        if (!npcsInRoom.empty()) {
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            cout << "You see the following NPCs: ";
            for (const auto& npc : npcsInRoom) {
                cout << npc.getName() << ", ";
            }
            cout << endl;
        }

        // Print available exits
        cout << "Available exits: ";
        for (const auto& exit : currentRoom->getExits()) {
            cout << exit.first << ", ";
        }
        cout << endl;

        // Prompt user for input
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cout << "What do you want to do? ";
        cin >> command;

        // Handle player movement
        if (command == "quit") {
            cout << "Goodbye!" << endl;
            break;
        } else if (currentRoom->getExit(command)) {
            currentRoom = currentRoom->getExit(command);
        } else {
            cout << "Invalid command." << endl;
        }
    }

    return 0;
}
