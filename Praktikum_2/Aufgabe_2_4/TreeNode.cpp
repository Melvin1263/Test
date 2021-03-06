#include "TreeNode.h"
#include <iostream>

TreeNode::TreeNode(TreeNode * links, TreeNode * rechts) : 
    NodePosID(0), NodeID(0), Alter(0), 
    Einkommen(0), PLZ(0), Links(links), Rechts(rechts)
{
}

std::string TreeNode::getName() const
{
    return Name;
}

int TreeNode::getAlter() const
{
    return Alter;
}

double TreeNode::getEinkommen() const
{
    return Einkommen;
}

int TreeNode::getPLZ() const
{
    return PLZ;
}

int TreeNode::getNodeID() const
{
    return NodeID;
}

int TreeNode::getNodePosID() const
{
    return NodePosID;
}

void TreeNode::setName(std::string name)
{
    Name = name;
}

void TreeNode::setAlter(int alter)
{
    Alter = alter;
}

void TreeNode::setEinkommen(double einkommen)
{
    Einkommen = einkommen;
}

void TreeNode::setPLZ(int plz)
{
    PLZ = plz;
}

void TreeNode::printData()
{
    std::cout << "Name: " << Name << " Alter: " << Alter << " Einkommen: " << Einkommen << " PLZ: " << PLZ << std::endl;
}

void TreeNode::setLinks(TreeNode *links)
{
    Links = links;
}

void TreeNode::setRechts(TreeNode *rechts)
{
    Rechts = rechts;
}

TreeNode * TreeNode::getLinks()
{
    return Links;
}

TreeNode * TreeNode::getRechts()
{
    return Rechts;
}
