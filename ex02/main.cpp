/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:30:12 by hmickey           #+#    #+#             */
/*   Updated: 2021/08/04 15:55:35 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

void	test(){
	try
	{
		Array<int> b(5);
		b[0] = 3;
		std::cout<<b[0]<<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what()<<std::endl;
	}
	return ;
}

int main(){
	test();
}