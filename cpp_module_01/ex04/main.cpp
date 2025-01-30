/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:52:26 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:52:27 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ReplaceString(std::string &original, std::string &toReplace, std::string &replaceWith)
{
    std::string result;
    size_t startPos = 0;
    size_t pos;

    if (toReplace[0] == '\0')
    {
        return (original);
    }
    while ((pos = original.find(toReplace, startPos)) != std::string::npos)
    {
        result += original.substr(startPos, pos - startPos);
        result += replaceWith;
        startPos = pos + toReplace.length();
    }
    result += original.substr(startPos);
    return (result);
}

int main(int argc, char *argv[])
{
    std::fstream in_stream;
    std::fstream out_stream;
    std::string line, new_filename;

    if (argc == 4)
    {
        std::string s1, s2, filename;
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];

        new_filename = filename + ".replace";
        in_stream.open(filename, std::ios::in);

        if (!in_stream.is_open())
        {
            std::cout << "File not found" << std::endl;
            return (-1);
        }
        out_stream.open(new_filename, std::ios::out);
        if (!out_stream.is_open())
        {
            in_stream.close();
            std::cout << "Error opening .replace file" << std::endl;
            return (-1);
        }

        while (getline(in_stream, line))
        {
            line = ReplaceString(line, s1, s2);
            out_stream << line << std::endl;
        }
        in_stream.close();
        out_stream.close();
    }
    else
    {
        std::cout << "Wrong arguments. Give filename, string to replace, replace string" << std::endl;
    }
    return (1);
}
