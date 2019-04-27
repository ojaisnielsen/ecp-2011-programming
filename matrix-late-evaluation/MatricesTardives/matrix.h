#ifdef MATRICESTARDIVES_EXPORTS
#define DllExport __declspec(dllexport) 
#else 
#define DllExport __declspec(dllimport) 
#endif

#ifndef MATRICES_H_
#define MATRICES_H_

#include "..\common.h"
#include <iostream>
#include <time.h>
#include "Node.h"
#include "ValueNode.h"
#include "ProductNode.h"
#include "SumNode.h"
#include "CachedNode.h"

class DllExport Matrix
{
public:

	//un constructeur créant des matrices aléatoirement
	Matrix(bool random = false);
	//un constructeur prenant un noeud en entrée
	Matrix(Node* node);
	//un constructeur prenant un tableau en entrée
	Matrix(const double matrix[N][N]);
	//un constructeur de copie
	Matrix(const Matrix &m);
	//un destructeur
	~Matrix();


	//une méthode d'accés
	double get(const int &i,const int &j) const;

	//les opérations entre matrices, déclarées en "friend"
	friend DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
	friend DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);


private:

	//tableau où sont stockés les coefficients de la matrice
	Node* _node;

};


DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);




#endif