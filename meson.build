project('screenfetch-meson', 'c', default_options:['c_std=c11'], version: '0.1')
cextra_args=['-Wall', '-pedantic', '-D_POSIX_C_SOURCE=200809L']
src=['src/main.c', 'src/arrays.c', 'src/disp.c', 'src/error_flag.c', 'src/logos.c', 'src/util.c', 'src/plat/linux/detect.c']
incdir = include_directories('include')
executable('screenfetch', src, include_directories : incdir, c_args:cextra_args, link_args : '-Wl,-lX11,-lGL')
