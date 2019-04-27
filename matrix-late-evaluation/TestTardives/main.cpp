#include "..\common.h"
#include <MatricesTardives\Matrix.h>
#include <stdio.h>
#include <iostream>

void main()
{

	//double At[N][N];
	//double Bt[N][N];
	//At[0][0]=1;
	//At[1][0]=2;
	//At[0][1]=3;
	//At[1][1]=4;

	//Bt[0][0]=7;
	//Bt[1][0]=5;
	//Bt[0][1]=2;
	//Bt[1][1]=3;

	//Matrix A(At);
	//Matrix B(Bt);

	//Matrix C=(A+B)*A;
	//std::cout<<C.get(0,0)<<std::endl;
	//std::cout<<C.get(1,0)<<std::endl;
	//std::cout<<C.get(0,1)<<std::endl;
	//std::cout<<C.get(1,1)<<std::endl;

	//Créer 2 matrices 2 façon aléatoire
	//(un constructeur spécifique donne des valeurs aléatoire entre -10 et 10 à chaque coefficient)
	Matrix A(true);
	Matrix B(true);

	// TEST 1
	long T=clock();
	for (int k=1; k<100000; ++k)
		(A+B)*(A+B)*(A+B)*(A+B);
	T=clock()-T;
	std::cout<<"Duree de test 1: "<<double(T)/CLOCKS_PER_SEC<<"s."<<std::endl;

	// TEST 2
	T=clock();
	for (int k=1; k<100000; ++k)
		((A+B)*(A+B)*(A+B)*(A+B)).get(0,0);
	T=clock()-T;
	std::cout<<"Duree de test 2: "<<double(T)/CLOCKS_PER_SEC<<"s."<<std::endl;

	// TEST 3
	T=clock();
	for (int k=1; k<100000; ++k)
		((A+B)*(A+B)*(A+B)*(A+B)).get(0,1);
	T=clock()-T;
	std::cout<<"Duree de test 3: "<<double(T)/CLOCKS_PER_SEC<<"s."<<std::endl;

	// TEST 4
	T=clock();
	for (int k=1; k<100000; ++k)
		((A+B)*(A+B)*(A+B)*(A+B)).get(1,0);
	T=clock()-T;
	std::cout<<"Duree de test 4: "<<double(T)/CLOCKS_PER_SEC<<"s."<<std::endl;

}

