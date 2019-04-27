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

	//un constructeur cr�ant des matrices al�atoirement
	Matrix(bool random = false);
	//un constructeur prenant un noeud en entr�e
	Matrix(Node* node);
	//un constructeur prenant un tableau en entr�e
	Matrix(const double matrix[N][N]);
	//un constructeur de copie
	Matrix(const Matrix &m);
	//un destructeur
	~Matrix();


	//une m�thode d'acc�s
	double get(const int &i,const int &j) const;

	//les op�rations entre matrices, d�clar�es en "friend"
	friend DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
	friend DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);


private:

	//tableau o� sont stock�s les coefficients de la matrice
	Node* _node;

};


DllExport Matrix operator*(const Matrix &m1, const Matrix &m2);
DllExport Matrix operator+(const Matrix &m1, const Matrix &m2);




#endif