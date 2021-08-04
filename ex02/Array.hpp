/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 12:57:24 by hmickey           #+#    #+#             */
/*   Updated: 2021/08/04 15:48:48 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <iostream>

template <class T>
class Array {

public:

	Array(): _n(0),	_array(NULL){}

	Array( unsigned int n ) : _n(n) {
		_array = new T[_n];
		for (uint i = 0; i < _n; i++)
			_array[i] = 0;
	}
	~Array(){ delete [] _array; }

	Array( Array const & src ){ this->operator=(src); }

	Array const & operator=(Array const & src){
		delete [] _array;
		if (this != &src){
			_n = src.get_n();
			_array = new T(_n);
			for (uint i = 0; i < _n; i++)
				_array[i] = src.getArrayElem(i);
		}
		return (*this);
	}

	T &	operator[]( uint i ){
		if (i >= _n)
			throw NoSuchElement();
		return (_array[i]);
	}

	class NoSuchElement : public std::exception {

	public:

		NoSuchElement(){}

		char const *what() const throw(){ return ("Invalid element of array"); }
	};

	uint	get_n() const { return (_n); }
	T		getArrayElem(int i) const { return (_array[i]); }

private:

	uint	_n;
	T*		_array;

};

#endif