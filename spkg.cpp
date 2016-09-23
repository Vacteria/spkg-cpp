/*
 * spkg.cpp
 * 
 * Copyright 2014 Miguel Angel Reynoso <miguel@ena320911>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>
#include <locale.h>
#include <libintl.h>
#include <unistd.h>
#include <getopt.h>

#include "spkg.h"


class OptArgs
{
	public :
		unsigned short int verbose;
		unsigned short int silent;
		unsigned short int force;
		std::string root;
		OptArgs();
};

OptArgs::OptArgs()
{
	verbose = 0;
	silent  = 0;
	force   = 0;
	root    = "/";
};

void print_vars(OptArgs *obj)
{
	std::cout << obj->verbose
              << "\n" << obj->silent
              << "\n" << obj->force
              << "\n" << obj->root
              << "\n";
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL,"");
	bindtextdomain(GETTEXT_PACKAGE,PACKAGE_LOCALE_DIR);
	textdomain(GETTEXT_PACKAGE);	
	
	OptArgs *o = new OptArgs();

	return 0;
}
