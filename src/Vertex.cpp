/**
 * COMS2004 Assignment 2, Minimum Weighted Spanning Tree Project
 * @file Vertex.cpp
 * @Synopsis Vertex class implementation file
 * @author Tyson Cross, Kopano Malombo, Vulombe Mathebula, Kimita Ramalingum, Vassiliki Marantos, Mfaniseni Thusi, Kulani Nukeri
 * @version 1.0
 * @date 2016-09-28
 */

#include <stdio.h>
#include <algorithm>
#include <vector>
#include "Vertex.h"

Vertex::Vertex(){
    visited = 0;
}

void Vertex::addEdge(Edge::Edge* e){
    connectedEdges.push_back(e);
};

void Vertex::removeEdge(Edge::Edge* e){
    for( int i = 0; i < connectedEdges.size(); i++){
        if (connectedEdges.at(i)==e){
            connectedEdges.erase(connectedEdges.begin()+i);
            i--;
        }
    }
};

long int Vertex::numEdges(){
    return connectedEdges.size();
};

Edge* Vertex::getEdge(int i){
    return connectedEdges.at(i);
}

const bool Vertex::isVisited(){
    return visited;
};

void Vertex::setVisited(bool value){
    visited = value;
};

Vertex::~Vertex(){
    connectedEdges.clear();
}