#ifndef		CSV_H
#define		CSV_H


#include	<string>
#include	<map>
#include	<vector>


class	csv{
private:
	std::string	m_path;
	bool	m_is_open;
	int		m_cols;
	int		m_rows;
	std::vector<std::vector<std::string>>	m_data;

	int		get_idx(const std::string&legend, const std::map<std::string, int> legends_map) const {
		if (legends_map.find(legend) == legends_map.end()) {
			return	-1;
		}
		return	legends_map.at(legend);
	}

public:

	csv(void) {}
	csv(const std::string&path) {
		m_path = path;
		open(path);
	}
	~csv(void) { close(); }

	void					set_path(const std::string&path)	{ m_path = path; }
	const	std::string		get_path(void)	const				{ return	m_path; }

	void	open(const std::string&name, const char delim = ',');
	bool	is_open(void) const { return	m_is_open;  }
	void	close(void) {
		if (is_open()) {
			m_path = "";
			for (auto row : m_data) {
				row.clear();
			}
			m_data.clear();
		}
	}

	const	std::string	get_data(const int row, const int col) const { return m_data[row][col]; }

	int		cols(void) const { return	m_cols; }
	int		rows(void) const { return	m_rows; }
};


#endif	//	CSV_H
