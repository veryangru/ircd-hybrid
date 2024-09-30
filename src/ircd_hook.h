/*
 *  ircd-hybrid: an advanced, lightweight Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 2024-2024 ircd-hybrid development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 *  USA
 */

#ifndef INCLUDED_ircd_hook_h
#define INCLUDED_ircd_hook_h

#include "stdinc.h"
#include "hook.h"
#include "client.h"

typedef struct
{
  bool notice;
  struct Client *source;
  struct Client *target;
  const char *text;
} ircd_hook_msg_client_ctx;

extern struct HookContainer *ircd_hook_msg_client_source_local;
extern struct HookContainer *ircd_hook_msg_client_target_local;

extern void ircd_hook_init(void);
#endif  /* INCLUDED_ircd_hook_h */