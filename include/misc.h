/*	misc.h
**	Author: William Woodruff
**
**	Miscellaneous macros used in screenfetch-c.
**	Like the rest of screenfetch-c, this file is licensed under the MIT license.
*/

#ifndef MISC_H
#define MISC_H

#define KB (1024)
#define MB (KB * KB)
#define GB (MB * KB)
#define MAX_STRLEN 512
#define SET_GIVEN_DISTRO(str) (safe_strncpy(given_distro_str, str, MAX_STRLEN))
#define STREQ(x, y) (!strcmp(x, y))
#define STRCASEEQ(x, y) (!strcasecmp(x, y))
#define BEGINS_WITH(x, y) (!strncmp(x, y, strlen(y)))
#define FILE_EXISTS(file) (!access(file, F_OK))

#endif /* MISC_H */
