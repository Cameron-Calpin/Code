#include <iostream>
#include <string>
#include <ctime>

class StringConvertable {
private:
	std::string data;
public:
	std::string toString(StringConvertable sc) {
		time_t now = time(0);
	    struct tm tstruct;
	    char buf[80];
	    tstruct = *localtime(&now);
	    strftime(buf, sizeof(buf), "Object: %c", &tstruct);
	    return buf;
	}
}; 

int main() {
	StringConvertable str_conv;
	StringConvertable str_conv2;
	std::cout << str_conv.toString(str_conv) << std::endl;
	std::cout << str_conv.toString(str_conv) << std::endl;
	return 0;
}