/*
    Driver for the SAA716x IR receiver
    Copyright (C) 2012 Konstantin Dimitrov <kosio.dimitrov@gmail.com>

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
 */

#ifndef SAA716X_INPUT_H
#define SAA716X_INPUT_H

#include "saa716x_priv.h"

extern void saa716x_input_irq_handler(struct saa716x_dev *saa716x);

extern int saa716x_input_init(struct saa716x_dev *saa716x, int gpio_in, const char *map_name);
extern void saa716x_input_fini(struct saa716x_dev *saa716x);

#endif
