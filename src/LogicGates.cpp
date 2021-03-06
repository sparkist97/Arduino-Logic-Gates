/*
 *Logic Gates - Library for logic gates
 *
 *Copyright 2018 Dominik Reichl
 *
 *Developed by Dominik Reichl
 *
 *This library is free software; you can redistribute it and/or modify
 *it under the terms of the GNU General Public License as published by
 *the Free Software Foundation; either version 2 of the License, or
 *(at your option) any later version.
 *
 *This library is distributed in the hope that it will be useful,
 *but WITHOUT ANY WARRANTY; without even the implied warranty of
 *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *GNU General Public License for more details.
 *
 *You should have received a copy of the GNU General Public License
 *along with this library; if not, write to the Free Software
 *Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *As a special exception, you may use this file as part of a free software
 *library without restriction.  Specifically, if other files instantiate
 *templates or use macros or inline functions from this file, or you compile
 *this file and link it with other files to produce an executable, this
 *file does not by itself cause the resulting executable to be covered by
 *the GNU General Public License.  This exception does not however
 *invalidate any other reasons why the executable file might be covered by
 *the GNU General Public License.
 */

#include <Arduino.h>
#include <LogicGates.h>

bool NotGate(bool param1){
	if(param1==true){
		return false;
	}else if(param1==false){
		return true;
	}
}

bool AndGate(bool param1,bool param2){
	if(param1==true&&param2==true){
		return true;
	}else{
		return false;
	}
}

bool NandGate(bool param1,bool param2){
	if(param1==true&&param2==true){
		return false;
	}else{
		return true;
	}
}

bool OrGate(bool param1,bool param2){
	if(param1==true||param2==true){
		return true;
	}else{
		return false;
	}
}

bool NorGate(bool param1,bool param2){
	if(param1==true||param2==true){
		return false;
	}else{
		return true;
	}
}

bool XorGate(bool param1,bool param2){
	bool x=NandGate(param1,param2);
	bool y=OrGate(param1,param2);
	bool z=AndGate(x,y);
	return z;
}

bool XnorGate(bool param1,bool param2){
	bool x=NandGate(param1,param2);
	bool y=OrGate(param1,param2);
	bool z=NandGate(x,y);
	return z;
}