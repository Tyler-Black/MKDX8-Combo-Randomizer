MKDx8 Combo Randomizer
Author: HighLystix/cvEskimo

This program when executed, generates a number of files that contains a randomly selected Mario Kart 8 Deluxe character/kart build

_____________________________________________________________________________________________________________________________

Notes

- All folders in the directories (no file extensions) will reappear if deleted when the program runs

- All text files (.txt) will reappear with default data if deleted when the program runs

- Modifying "ComponentsList.txt" will modify the available components and their statistics as long as the data follows the given structure
(All components by default)

- Modifying "ComponentsWhitelist.txt" will modify the whitelist of pickable components as long as the data follows the given structure
(All components by default)

- Modifying "PlayerList.txt" will modify the number of builds and the names attached to each one
("Player 1", "Player 2", ..., "Player 12" by default)

_____________________________________________________________________________________________________________________________

Build Directories in: "/C:\Users\[SYSTEM_USERNAME]\Documents\MKDX8-Combo-Randomizer"

Directories:
> MKDX8-Combo-Randomizer
   -> Program Data
      -> ComponentsList.txt
      -> ComponentsWhitelist.txt
      -> PlayerList.txt
   -> Randomized Builds
      -> Build
      -> Build (1)
      -> Build (2)
      -> ...

> .exe (Placed in "MKDX8-Combo-Randomizer" is recommended)

_____________________________________________________________________________________________________________________________

"ComponentsList.txt", Data Structure

"type"|"name"
Wei "number"		// Wei = Weight
Acc "number"		// Acc = Acceleration
OnT "number"		// OnT = On Road Traction
OfT "number"		// OfT = Off Road Traction
MTb "number"		// MTb = Mini Turbo
GSp "number"		// GSp = Ground Speed
WSp "number"		// WSp = Water Speed
GSp "number"		// GSp = Anti Gravity Speed
ASp "number"		// ASp = Air Speed
GHn "number"		// GHn = Ground Handling
WHn "number"		// WHn = Water Handling
GHn "number"		// GHn = Anti Gravity Handling
AHn "number"		// AHn = Air Handling

   "name" = Component Name

   "type" = Component Type
      dv = Driver
      bd = Body/Chassis
      tr = Tires
      gd = Glider

   "number" Stat Value
      Any number in the form "0.00"

_____________________________________________________________________________________________________________________________

"ComponentsWhitelist.txt", Data Structure

"type"|"state"|"name"
...

   "name" = Component Name

   "type" = Component Type
      dv = Driver
      bd = Body/Chassis
      tr = Tires
      gd = Glider

   "state" On/Off Switch
      "x" = On (checked)
      " " = Off (unchecked)

_____________________________________________________________________________________________________________________________

"PlayerList.txt", Data Structure

"name"
"name2"
"name3"
...

- Each line will generate a build under that lines name
