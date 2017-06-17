#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class Vector3D
{
private:
	float coordX, coordY, coordZ;
public:
	Vector3D();
	void setCoordX(float x) { coordX = x; }
	void setCoordY(float y) { coordY = y; }
	void setCoordZ(float z) { coordZ = z; }
	float getCoordX() { return coordX; }
	float getCoordY() { return coordY; }
	float getCoordZ() { return coordZ; }
	~Vector3D();
};

#endif //!_VECTOR3D_