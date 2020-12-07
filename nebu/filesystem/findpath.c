/*
    Loki_Update - A tool for updating Loki products over the Internet
    Copyright (C) 2000  Loki Software, Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    info@lokigames.com
*/

/* I modified this file a little, removing unneeded features and making the
   thing compile ( Andreas Umbach <marvin@dataway.ch> ) */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifndef macintosh
#ifndef WIN32
#    include <unistd.h>
#endif
#endif

#ifndef PATH_MAX
#define PATH_MAX 8192
#endif

#if !defined(WIN32) && !defined(macintosh) && !defined(__APPLE__)
void goto_installpath(const char *argv0)
{
    if (chdir("/usr/share/games/gltron") < 0) {
        fprintf(stderr, "Couldn't change to install directory\n");
        exit(1); /* OK: critical, installation corrupt */
    }
}
#endif
