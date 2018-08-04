project('screenfetch-meson', 'c', default_options : ['c_std=c11'], license : 'MIT', version: '0.1')
extra_args=['-D_POSIX_C_SOURCE=200809L', '-march=native']
src=['src/main.c', 'src/arrays.c', 'src/disp.c', 'src/error_flag.c',
  'src/logos.c', 'src/util.c']
dep = []
c_link = ''

if host_machine.system() == 'linux'
  src+=['src/plat/linux/detect.c']
  dep += [dependency('x11')]
  dep += [dependency('gl')]
  c_link +='-Wl,-lX11,-lGL'
endif

incdir = include_directories('include')
executable('screenfetch-c', src, include_directories : incdir, c_args : extra_args,
  link_args : c_link, dependencies : dep)
