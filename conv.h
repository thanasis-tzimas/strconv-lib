#ifndef _CONV_H_
#define _CONV_H_

#include <math.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

int8_t str_to_int8(char* str) {
	int8_t num = 0;
	bool isNeg = false;
	int8_t digits = 0;
	int8_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		if(str[i] == '-') isNeg = true;
		num += (str[i] - '0')*pow(10, digits++);
	}
	if(isNeg) num *= -1;
	return num;
}

int16_t str_to_int16(char* str) {
	int16_t num = 0;
	bool isNeg = false;
	int16_t digits = 0;
	int16_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		if(str[i] == '-') isNeg = true;
		num += (str[i] - '0')*pow(10, digits++);
	}
	if(isNeg) num *= -1;
	return num;
}

int32_t str_to_int32(char* str) {
	int32_t num = 0;
	bool isNeg = false;
	int32_t digits = 0;
	int32_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		if(str[i] == '-') isNeg = true;
		num += (str[i] - '0')*pow(10, digits++);
	}
	if(isNeg) num *= -1;
	return num;
}

uint8_t str_to_uint8(char* str) {
	uint8_t num = 0;
	uint8_t digits = 0;
	uint8_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		num += (str[i] - '0')*pow(10, digits++);
	}
	return num;
}

uint16_t str_to_uint16(char* str) {
	uint16_t num = 0;
	uint16_t digits = 0;
	uint16_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		num += (str[i] - '0')*pow(10, digits++);
	}
	return num;
}

uint32_t str_to_uint32(char* str) {
	uint32_t num = 0;
	uint32_t digits = 0;
	uint32_t len = strlen(str);
	for(int i=len-1; i>=0; i--) {
		num += (str[i] - '0')*pow(10, digits++);
	}
	return num;
}

#endif
