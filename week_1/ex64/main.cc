#include "matrix/matrix.h"
#include <iostream>
using namespace std;

void process(Matrix &mat);

int main()
{
	Matrix leon(5,5);
	Matrix klaas({{1,2,3}, {4,5,6}, {7,8,9}});
	Matrix frits;
	Matrix frank;
	
	klaas.tr();
	klaas.print();
	process(klaas);
	klaas.print();

	//leon.print();
	//process(leon);
	//leon.print();
	
	//klaas.print();
	//leon = klaas.transpose();
	//leon.print();
	//klaas.tr();
	//klaas.print();

	//Matrix freddie({{1,2}, {1,3}});
	
	// Matrix freddie(klaas);
	// Matrix testmove(move(freddie));

	// frits = leon;
	// frank = move(leon);

	//frank = Matrix::identity(4);
	//frank.print();

	//double const *ptr1 = freddie.row(2);
	//double *ptr2 = leon.row(2);
	//Matrix iMatrix = identity(3);
	//cout << iMatrix.data() << '\n';

	//leon.print();
	//klaas.print();
	//testmove.print();
	//freddie.print();
	//frits.print();
	//cout << frits.nCols() << '\n';
	//iMatrix.print();

	//klaas.tr();
	//klaas.print();


	//cout << *ptr1 << '\t' << *ptr2 << '\n';

	/*cout << "Freddie: " << freddie.nCols() << '\t' << freddie.data() <<'\n';
	cout << "Leon:    " << leon.nCols() << '\t' << leon.data() << '\n';
	freddie.swap(leon);
	cout << "Freddie: " << freddie.nCols() << '\t' << freddie.data() <<'\n';
	cout << "Leon:    " << leon.nCols() << '\t' << leon.data() << '\n';
	*/

}
