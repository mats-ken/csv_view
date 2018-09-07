#include	"stdafx.h"


#include	"csv.h"

#include	<fstream>
#include	<iostream>
#include	<sstream>
#include	<algorithm>


using	namespace	std;


void	csv::open(const string&path, const char delim)
{
	m_path = path;

	m_cols = m_rows = 0;
	m_data.clear();

	ifstream	ifs(path);
	if (ifs.fail()) {
		throw("file open error");
	}

	string line;

	while (getline(ifs, line)) {
		m_data.resize(m_rows + 1);
		istringstream	stream(line);
		string	token;
		while (getline(stream, token, delim)) {
			m_data[m_rows].push_back(token);
		}
		m_cols = max(m_cols, (int)m_data[m_rows].size());
		m_rows++;
	}

	ifs.close();

	m_is_open = true;
}
