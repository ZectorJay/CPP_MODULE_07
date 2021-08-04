/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:40:41 by hmickey           #+#    #+#             */
/*   Updated: 2021/08/03 19:54:18 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

class Awesome {

public:

	Awesome (int n) : _n(n){}
	bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); }
	bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
	int get_n() const { return (_n); }

private:

	int _n;
};

template <typename T>
T const & max(T const & value1, T const & value2){
	return (value1 > value2 ? value1 : value2);
}

template <typename T>
T min(T const & value1, T const & value2){
	return (value1 < value2 ? value1 : value2);
}

template <typename T>
void swap(T & value1, T & value2){
	T value3 = value1;
	value1 = value2;
	value2 = value3;
}

#endif