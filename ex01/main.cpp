/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:59:33 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/30 12:22:22 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(){
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	double tab3[] = {2.2, 3.3, 4.8};

	iter(tab, 5, print);
	iter (tab2, 5, print);
	iter(tab3, 3, print);
}