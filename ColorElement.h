/* ColorElement.h
 *
 * Copyright (C) 2006 Free Software Foundation, Inc.
 *
 * Author:	Richard Frith-Macdonald <rfm@gnu.org>
 * Date:	2006
 * 
 * This file is part of GNUstep.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111 USA.
 */

#import "ThemeElement.h"

@interface ColorElement : ThemeElement
{
  BOOL ignoreSelectAt;
}

/** Handle color setting from color well in inspector
 */
- (void) takeColorFrom: (id)sender;

/** Get color name from color well tag.
 */
- (NSString*) tagToName: (int)tag;

- (NSScrollView *) makeColorListScrollView;

- (int) namesCount;

@end

