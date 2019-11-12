/*
KVMGFX Client - A KVM Client for VGA Passthrough
Copyright (C) 2017-2019 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "objectlist.h"

typedef ObjectList StringList;

inline static StringList stringlist_new(bool owns_strings)
{
  return objectlist_new(owns_strings ? objectlist_free_item : 0);
}

inline static void stringlist_free(StringList * sl)
{
  return objectlist_free(sl);
}

inline static int stringlist_push (StringList sl, char * str)
{
  return objectlist_push(sl, str);
}

inline static unsigned int stringlist_count(StringList sl)
{
  return objectlist_count(sl);
}

inline static char * stringlist_at(StringList sl, unsigned int index)
{
  return objectlist_at(sl, index);
}