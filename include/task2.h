#pragma once
#include <iostream> // ���������� ��� ����� � ������� 
#include <math.h> // ���������� ���������� �� �������������� �������� 
#include <ctime> // ��� ���������� ������ ������� srand & rand
#include <cstring> // ��������� ��� 
using namespace std; // "������������ ����", ����� �� ������������ ��� ����� cout & endl ������ ���, �������� 

bool checkPrime(unsigned int value);
unsigned long long nPrime(unsigned n);
unsigned long long nextPrime(unsigned long long value);