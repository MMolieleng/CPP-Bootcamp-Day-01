/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:33:13 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:33:16 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed4Losers.hpp"

int main(int argc, char const *argv[])
{
	if (argc == 4) {
        Sed4Losers sed;
        if (sed.isAllGood(argv[2], argv[3])) {
            std::string lines = sed.readFileToString(argv[1]);
            if (!lines.empty()) {
                std::string replaced = sed.replaceString(lines, argv[2], argv[3]);
                sed.writeToFile("sed.replace", replaced);
            }
        }
    } else {
        std::cout << "Please provide all required fields {filename} {to replace} {replace with}" << std::endl;
    }
	return 0;
}
