#include<iostream>
#include<assert.h>
using namespace std;
char *my_strcpy(char *dst,const char *src) ;
int my_strlen(const char *str);
class String {
private:
	char *str;
	int len;
public:
	String();
	~String();
	String(const char*const cstr);
	String &operator=(const String &rs);
	String operator+(const String&);
	friend ostream &operator<<(ostream &output, const String &str);
	friend istream &operator>>(istream &input, String &str);
};
String::String(){
	cout << "---String constructor---" << endl;
	len = 0;
	str = new char[1];
	str[0] = '\0';
}
String::~String(){
	delete[]str;
	len = 0;
}
String &String::operator=(const String &rs){
	cout << "String::operator=" << endl;
	if (this == &rs) return *this;
	delete[]str;
	len = rs.len;
	str = new char[len + 1];
	for (int i = 0; i < len; i++) {
		str[i] = rs.str[i];    
	}
	str[len] = '\0';
	return *this;
}
String String::operator+(const String &rs){
	cout << "String::operator+" << endl;
	unsigned int total = len + rs.len;
	char *tmpstr = new char[total + 1];
	unsigned int i, j;
	for (i = 0; i < len; i++) {
		tmpstr[i] = str[i];
	}
	for (j = 0; j < rs.len; j++, i++) {
		tmpstr[i] = rs.str[j];
	}
	tmpstr[total] = '\0';
	String st;
	my_strcpy(st.str,tmpstr);
	st.len=total;
	delete tmpstr;
	tmpstr = NULL;
	return st;
}
ostream &operator<<(ostream &output, const String &str){
	output << str.str;
	return output;
}
istream &operator>>(istream &input, String &str){
	input >> str.str;
	str.len=my_strlen(str.str);
	return input;
}
char *my_strcpy(char *dst,const char *src)  
{  
    assert(dst != NULL);  
    assert(src != NULL);  
    char *ret = dst;  
    memcpy(dst,src,my_strlen(src)+1);  
    return ret;  
}  
int my_strlen(const char *str)
{
    assert(str != NULL);
    return *str ? (my_strlen(++str) + 1) : 0;
}

int main() {
	String str1;
	String str2;
	cin >> str1 >> str2;
	cout << str1 << endl << str2 << endl;
	String str3=str1+str2;
	cout <<  str3 ;
 	
	return 0;
}
