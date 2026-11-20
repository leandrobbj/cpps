/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:11:12 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 06:33:53 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printError("error: expected <executable> <filename> <s1> <s2>");
		return 1;
	}
	StreamEditor sed(av[1],av[2],av[3]);
	if (!sed.setupStreams())
		return 1;
	sed.replaceString();
	return 0;
}
