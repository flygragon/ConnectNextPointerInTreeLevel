// ConnectNextPointerInTreeLevel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"CreateBiTree.h"
#include"ConnectNextPointerInTreeLevel.h"
#include"BiTreeOutpuByLevel.h"
using namespace std;

int main()
{
	CreateBiTree CBT;
	TreeLinkNode* TLK = CBT.CreateBiTreeByLevel();
	ConnectTreeLevel CTL;
	CTL.connect(TLK);
	BiTreeOutputByLevel BTOL;
	BTOL.LevelOutput(TLK);
    return 0;
}

