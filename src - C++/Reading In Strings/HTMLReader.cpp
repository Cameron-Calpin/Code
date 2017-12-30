#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkHtmlTags(vector<string> str);
bool checkHeadTags(vector<string> str);
bool checkBodyTags(vector<string> str, int &b_index, int &e_index);
void readTags(vector<string> str, int b_index, int e_index);

int main() {
	vector<string> values;
	string input;
	int b_index = 0, e_index = 0;

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
	bool body_result = checkBodyTags(values, b_index, e_index);
	readTags(values, b_index, e_index);
	
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
		 || (!beg_head && !end_head)) {
		return true;
	}
	return false;
}

bool checkBodyTags(vector<string> str, int &b_index, int &e_index) {
	int beg_index = 0, end_index = 0;
	bool beg_body = false;
	bool end_body = false;
	for (vector<string>::iterator itr =
		 str.begin(), end = str.end();
		 itr != end;
		 ++itr)
	{	

		size_t b_body = (*itr).find("<body>");
		size_t e_body = (*itr).find("</body>");
		if (b_body != string::npos) {
			b_index = beg_index;
			beg_body = true;
		}

		if (e_body != string::npos) {
			e_index = end_index;
			end_body = true;
		}
		beg_index++;
		end_index++;
	}

	if ((beg_body && end_body)
		 || (!beg_body && !end_body)) {
		return true;
	}
	return false;
}

void readTags(vector<string> str, int b_index, int e_index) {
	int d_index = 0, pos = 0;
	for (vector<string>::iterator itr =
		 str.begin() + b_index + 1, end = str.begin() + e_index;
		 itr != end;
		 itr++)
	{
		bool b_b, e_b, b_i, e_i, b_a, m_a, e_a = false;
		string b, it, a;
		d_index++;
		cout << d_index << endl;

		size_t beg_b = (*itr).find("<b>");
		size_t end_b = (*itr).find("</b>");
		if (beg_b != string::npos) {
			cout << "beg_b" << endl;
			b_b = true;
		}
		if (end_b != string::npos) {
			cout << "end_b" << endl;
			e_b = true;
		}

		if (b_b && e_b) {
			b.resize((*itr).size() - 7);
			b = (*itr).substr(3, (*itr).size() - 7);
			// for (size_t i = 3; i < (*itr).size() - 4; i++) {
			// 	b[i - 3] = (*itr)[i];
			// }
			cout << "*" << b << "*" << endl;
			continue;
		}

		size_t beg_i = (*itr).find("<i>");
		size_t end_i = (*itr).find("</i>");
		if (beg_i != string::npos) {
			b_i = true;
		}
		if (end_i != string::npos) {
			e_i = true;
		}

		if (b_i && e_i) {
			it.resize((*itr).size() - 7);
			it = (*itr).substr(3, (*itr).size() - 7);
			// for (size_t i = 3; i < (*itr).size() - 4; i++) {
			// 	it[i - 3] = (*itr)[i];
			// }
			cout << "_" << it << "_" << endl;
			continue;
		}

		size_t beg_a = (*itr).find("<a href=");
		size_t mid_a = (*itr).find_last_of(">");
		size_t end_a = (*itr).find("</a>");

		if (beg_a != string::npos) {
			b_a = true;
		}
		if (mid_a != string::npos) {
			while (mid_a != string::npos) {
				d_index++;
			}
			pos = d_index;
			cout << d_index << " ";
			m_a = true;
		}
		if (end_a != string::npos) {
			e_a = true;
		}

		if (b_a && m_a && e_a) {
			a.resize((*itr).size() - 7);
			a = (*itr).substr(pos, (*itr).size() - 4);
			cout << "Link text: " << a << endl;
			continue;
		}

		b_b, e_b, b_i, e_i, b_a, m_a, e_a = false;
	}
}