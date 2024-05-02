#pragma once
#ifndef SHIPMENT_H
#define SHIPMENT_H

#include "mapping.h"

//Below box volumes have units of cubic meter
#define S_SIZE 0.25
#define M_SIZE 0.50
#define L_SIZE 1.00
#define MAX_ROUTES 132

//Truck shipment constraints:
#define MAX_WEIGHT 1000     //kgs
#define MIN_WEIGHT 1
#define MAX_VOLUME 36       //cubic meter
#define MIN_VOLUME 0.25

/**
 * Struct: Truck
 * Author: Manav Alpeshbhai Zadafiya
 * Desc: Defines a Trucks state, determines if it can accept additional shipments, it includes:
 *   - current cargo weight
 *   - current cargo volume
 *   - path the truck will take
 */
struct Truck
{
    double cargoWeight;
    double cargoVol;
    struct Route* route;
};

/**
 * Struct: Shipment
 * Author: Fenil Soni
 * Desc: Defines customer package/shipment, includes:
 *   - shipment weight
 *   - shipment volume
 *   - shipment destination
 */
struct Shipment
{
    double weight;
    double vol;
    struct Point destination;
};

/**
 * forward initializition of struct
 * struct Map* baseMap : will contain the map featuring our delivery range, building, and base.
 * struct Truck* trucks: will contain our 3 trucks, each assigned to the blue, green, or yellow route.
 */
struct Map* baseMap;
struct Truck trucks[3];

/**
 * Function: validate
 * Author: Fenil Soni
 * Validates parameters for shipment, and sends valid shipment to AssignTrucks function.
 * @param size - size of shipment: S_SIZE, M_SIZE, or L_SIZE
 * @param weight - weight of shipment in kgs (1 - 1000)
 * @param destination - shipment's deilvery destination from {0,0} to {25,25}
 * @returns  1 if valid,
 *          -1 if invalid size,
 *          -2 if invalid weight,
 *          -3 if invalid destination, or
 *           0 if exit code is entered.
 */
int validate(double size, double weight, struct Point destination);

/**
 * Function: read
 * Author: Fenil Soni
 * Reads user input for new shipments, and sends the input into validate function.
 * @param - No parameter
 * @returns - Function has no return value
 */
void read();

/**
 * Function: AssignTruck
 * Author: Fenil Soni
 * Determines which truck is best to assign shipment s to, and assigns the new route.
 * @param s - the Shipment to deliver
 * @returns - the truck assigned to shipment s by color code
 *          returns 2 if shipment is assigned to the blue truck
 *          returns 4 if shipment is assigned to the green truck
 *          returns 8 if shipment is assigned to the yellow truck
 *          returns -1 if shipment cannot be delivered today
 */
int AssignTruck(struct Shipment s);

/***
* Function: calculateUtilizationScore
* Author: Fenil Soni
* Determines the utilization score based on defined weight and vol limit
* @param weight - the truck's current weight or shipment's weight
* @param vol - the truck's current volume or shipment's volume
* @returns - a utilization in float
*          - if the returned score is 0, then inputs were invalid
*          - otherwise, the inputs were valid.
*/
float calculateUtilizationScore(double weight, double vol);

/**
 * Function: init
 * Author: Manav Zadafiya
 * Purpose: Initializes global variables that will be used throughout the project:
 * @param - No parameter
 * @returns - Function has no return value
 */
void init(void);

/**
 * Function: getAllTruckPaths
 * Author: Ashraf Bharot
 * populates "routes" array with routes that reach the shipment
 * @param s - Shipment struct, containing the Shipment destination
 * @param truck - Truck struct, containing the route the truck travels on the map
 * @param map - Map struct, containing all inbound points in the map
 * @param routes - holds all valid routes (i.e. struct Route)
 * @returns - void, populates the "routes" array
 */
void getAllTruckPaths(struct Shipment s, struct Truck truck, const struct Map* map, struct Route* routes[MAX_ROUTES], int* size);

/**
* Function: getBestRoute
* Author: Ashraf Bharot
* loops through all valid routes in "routes" array, returns index of route with the shortest distance
* @param routes - holds all valid routes (i.e. struct Route)
* @param s - Shipment struct, containing the Shipment destination
* @returns - int, index of route in "routes" array with the shortest route
*/
int getBestRoute(struct Route routes[MAX_ROUTES], int s0, struct Shipment s);

/**
* Function: containsDestination
* Author: Ashraf Bharot
* checks if the given route is valid, if it reaches the destination
* @param route - the shortest route calculated at ith point of a trucks route
* @param s - Shipment struct, containing the Shipment destination
* @returns - int, 1 if the destination is in the route, 0 if not
*/
int containsDestination(struct Route* route, struct Shipment s);

/**
* Function: printRoute
* Author: Ashraf Bharot
* print a routes points to console
* @param route - route struct containing the points in given route
* @returns - void, does not return a value, only prints to console
*/
void printRoute(struct Route route, struct Shipment s);

/**
* Function: isBuilding
* Author: Ashraf Bharot
* checks for building location
* @param r -  route struct containing the points in given route
* @param map - Map struct, containing all inbound points in the map
* @returns - 1 if there is building,
*            0 if not
*/
int isBuilding(const struct Route r, const struct Map* map);
#endif
