#include<iostream>
using namespace std;
class Matrix {
private:
	int row;
	int column;
	double *p;
public:
	Matrix() {
		row = 0;
		column = 0;
		p = NULL;
	}
	Matrix(int r, int c, double *pt) :row(r), column(c) {
		p = new double[r*c];
		for (int i = 0; i < r*c; i++)
			p[i] = pt[i];
	}
	double& operator()(int i, int j)const{
	    if (i<0 || i >= row || j < 0 || j >= column)
		        exit(0); 
	
		    return p[i*column + j];
		}
	Matrix operator+(const Matrix &m)const {
		if (column != m.column || row != m.row) exit(0);
		Matrix temp;
		temp.p = new double[row*column];
		temp.column = column;
		temp.row = row;
		for (int i = 0; i < row*column; i++)
			temp.p[i] = p[i] + m.p[i];
		return temp;
	}
	~Matrix(){
		cout << "~Matrix" << endl;
		if (p != NULL) {
			delete[]p;
			p = NULL;
		}
	}
	friend ostream& operator<<(ostream&, const Matrix&);
	friend istream& operator>>(istream&,  Matrix&);
};
ostream& operator<<(ostream& o,const Matrix &m) {
	for (int i = 0; i < m.row*m.column;i++) {
		if ((i + 1) % m.column == 0)
			o << m.p[i] << endl;
		else
			o << m.p[i] << " ";
	}
	return o;
}

istream& operator >>(istream& is, Matrix& m)
{
	    for (int i = 0; i < m.row; ++i)
		        for (int j = 0; j<m.column; ++j)
		            is >> m(i, j);
	    return is;
	}

int main() {
	double p1[12] = {0};
	double p2[12] = {0};
	double p3[12] = {0};
	Matrix m1(4,3,p1),m2(4,3,p2),m3(4,3,p3);
	cin >> m1 >> m2;
	cout << m1 << m2;
	cout << m1 + m2;

	return 0;
}
