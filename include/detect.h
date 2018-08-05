/*	detect.h
**	Author: William Woodruff
**	-------------
**
**	The detection functions used by screenfetch-c are prototyped here.
**	Like the rest of screenfetch-c, this file is licensed under the MIT license.
*/

#ifndef DETECT_H
#define DETECT_H

void detect_distro();
void detect_host();
void detect_kernel();
void detect_uptime();
void detect_pkgs();
void detect_cpu();
void detect_gpu();
void detect_disk();
void detect_mem();
void detect_shell();
void detect_res();
void detect_de();
void detect_wm();
void detect_wm_theme();
void detect_gtk();

#endif /* DETECT_H */
