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
* **IDE/Compiler:** Dev-C++, GCC, or Turb

## 🗺️ Metro Station Network Map
The program simulates a network of 5 key stations with the following routes and distances (KM):
## How to run
*bash
gcc metrosystem.c
.\a.exe

