project('screenfetch-meson', 'c', default_options : ['c_std=c11'],
  license : 'MIT', version : '0.1')

extra_args = ['-Wextra']

# need this to use strdup and popen
extra_args += ['-D_POSIX_C_SOURCE=200809L', '-pedantic']

src = ['src/main.c', 'src/arrays.c', 'src/disp.c', 'src/error_flag.c',
  'src/logos.c', 'src/util.c']
incdir = include_directories('include')
dep = []
scripts = []

if host_machine.system() == 'linux'
  src += ['src/plat/linux/detect.c']
  dep += [dependency('x11'), dependency('gl')]
  scripts += ['src/scripts/detectgtk']
else 
  # only Linux has been tested
  error('Unsupported OS')
endif

if get_option('buildtype') == 'release'
  extra_args += ['-march=native']
endif

# disable -Wformat-truncation in snprintf because it is probably bogus
if meson.get_compiler('c').get_id() == 'gcc'
  extra_args += ['-Wno-format-truncation']
endif

executable('screenfetch-c', src, include_directories : incdir,
  c_args : extra_args, dependencies : dep, install : true)

install_data(scripts, install_dir : get_option('prefix') + '/bin')
install_man('man/man1/screenfetch-c.1')
