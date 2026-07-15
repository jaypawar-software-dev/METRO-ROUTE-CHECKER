# Metro Route & Fare Finder (Pune Metro Simulator) 🚇

A light-weight, console-based C program designed to find the shortest route, estimated travel time, and ticket fare between metro stations. This project utilizes **Graphs (Data Structure)** and **Dijkstra's Shortest Path Algorithm** to simulate real-time transit planning, inspired by the Pune Metro network.

---

## 📌 Project Overview
In rapidly growing cities like Pune, commuters face challenges in finding the most efficient routes and estimating travel expenses. 

This project models metro stations as **nodes/vertices** and tracks as **weighted edges** (representing distances in kilometers). By applying Dijkstra's algorithm on the adjacency matrix of the metro graph, the system calculates the optimal path instantly.

### Key Features:
* **Shortest Route Calculation:** Uses Dijkstra's algorithm to compute the shortest distance.
* **Fare Estimation:** Dynamically calculates ticket pricing (Base fare + rate per km).
* **Time Estimator:** Provides an approximate travel duration based on a standard speed.
* **Interactive CLI:** Easy-to-use command-line interface with listed station codes.

---

## 🛠️ Tech Stack & Algorithms
* **Language:** C (Standard C99)
* **Data Structure:** Graph (represented using Adjacency Matrix)
* **Algorithm:** Dijkstra's Shortest Path Algorithm
* **IDE/Compiler:** Dev-C++, GCC, or Turbo C


=== PUNE METRO STATION LIST ===
0. PCMC
1. Bhosari
2. Khadki
3. Shivaji Nagar
4. Swargate

Enter Source Station Number (0-4): 0
Enter Destination Station Number (0-4): 3

==============================
     PUNE METRO TRIP DETAILS   
==============================
Source Station      : PCMC
Destination Station : Shivaji Nagar
Total Distance      : 15 KM
Estimated Time      : 30 Minutes
Calculated Fare     : Rs. 40
==============================
---

## 🗺️ Metro Station Network Map
The program simulates a network of 5 key stations with the following routes and distances (KM):
