#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkHtmlTags(vector<string> str);
bool checkHeadTags(vector<string> str);
bool checkBodyTags(vector<string> str);

int main() {
	vector<string> values;
	string input;

	do {
		getline(cin, input, '\n');
		values.push_back(input);
	} while(!input.empty());

	bool html_result = checkHtmlTags(values);
	if (!html_result) {
		cout << "lol nope" << endl;
		return 0;
	}
	bool head_result = checkHeadTags(values);
	bool body_result = checkBodyTags(values);
	
	return 0;
}

bool checkHtmlTags(vector<string> str) {
	bool beg_html = false;
	bool end_html = false;
	for (vector<string>::iterator itr = 
		 str.begin(), end = str.end(); 
		 itr != end; 
		 ++itr) 
	{
		size_t b_html = (*itr).find("<html>");
		size_t e_html = (*itr).find("</html>");
		if (b_html != string::npos) {
			beg_html = true;
		}
		if (e_html != string::npos) {
			end_html = true;
		}
	}

	if (beg_html && end_html) {
		return true;
	}
	return false;
}

bool checkHeadTags(vector<string> str) {
	bool beg_head = false;
	bool end_head = false;
	for (vector<string>::iterator itr = 
		 str.begin(), end = str.end(); 
		 itr != end; 
		 ++itr) 
	{
		size_t b_head = (*itr).find("<head>");
		size_t e_head = (*itr).find("</head>");
		if (b_head != string::npos) {
			beg_head = true;
		}
		if (e_head != string::npos) {
			end_head = true;
		}
	}

	if ((beg_head && end_head)
		 || (beg_head && !end_head)) {
		return true;
	}
	return false;
}

bool checkBodyTags(vector<string> str) {
	int index = 0;
	int b_index, e_index;
	for (vector<string>::iterator itr =
		 str.begin(), end = str.end();
		 itr != end;
		 ++itr, index++)
	{
		size_t b_body = (*itr).find("<body>");
		size_t e_body = (*itr).find("</body>");
		if (b_body != string::npos) {
			b_index = (*itr).find("<body>");
		}

		if (e_body != string::npos) {
			e_index = (*itr).find("</body>");
		}

		for (vector<string>::iterator n_itr = 
	 		 str.begin() + (b_index + 1),
			 end = str.begin() + (e_index - 1);
			 itr != end;
			 ++itr) 
			 {
			 	cout << *n_itr << endl;
			 }
	}
	return true;
}