#pragma once


#include <cmath>
#include <iostream>
#include <print>
#include <format>
#include <memory>
#include <string>

#include "unsuck.hpp"

#include <glm/gtx/quaternion.hpp>

using namespace std;

struct Point{
	float x;
	float y;
	float z;
	union{
		uint32_t color;
		uint8_t rgba[4];
	};
};

struct Points {

	string name;

	int64_t numPoints;
	int bytesPerPoint;
	int headerSize;

	int numPointsLoaded;

	glm::mat4 world;

	vec3 min = {Infinity, Infinity, Infinity};
	vec3 max = {-Infinity, -Infinity, -Infinity};

	shared_ptr<Buffer> position = nullptr;
	shared_ptr<Buffer> color = nullptr;

};