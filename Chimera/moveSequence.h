#pragma once
#include "stdafx.h"

#include <vector>

class moveSingle {
public:
	//std::vector<bool> boolAOX;
	//std::vector<bool> boolAOY;
	//inline UINT8 nx() { 
	//	return std::count(boolAOX.begin(), boolAOX.end(), true);
	//}; //number of active tweezers
	//inline UINT8 ny() {
	//	return std::count(boolAOY.begin(), boolAOY.end(), true);
	//}; //number of active tweezers

	std::vector<UINT8> startAOX;
	std::vector<UINT8> startAOY;
	std::vector<UINT8> endAOX;
	std::vector<UINT8> endAOY;

	inline UINT8 nx() {
		return startAOX.size();
	}; //number of active tweezers
	inline UINT8 ny() {
		return startAOY.size();
	}; //number of active tweezers
};

class moveSequence {
public:
	std::vector<moveSingle> moves;
	inline UINT8 nMoves() {
		return moves.size();
	}
};