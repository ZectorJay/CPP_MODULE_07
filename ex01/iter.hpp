/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:54:27 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/30 12:20:21 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

class Awesome {

public:

	Awesome () : _n(42){}
	int get() const { return (_n); }

private:

	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs){
	o<<rhs.get();
	return (o);
}

template <typename T>
void print(T const & x){
	std::cout<<x<<std::endl;
}

template <typename T>
void	iter(T * array, unsigned int length, void (*f)(T const & elem)){
	if (!array || !f)
		return ;
	unsigned int i = -1;
	while (++i < length){
		f(array[i]);
	}
}

#endif