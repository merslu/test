//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : UML Sequence Diagram
//  @ File Name : Account.h
//  @ Date : 2016/11/20
//  @ Author : 
//
//


#if !defined(_ACCOUNT_H)
#define _ACCOUNT_H

#include "Bid.h"

class Account {
public:
	void setBid(Bid theBid);
	int calcAsset();
private:
	vector<Bid*> bidObj;
};

#endif  //_ACCOUNT_H
