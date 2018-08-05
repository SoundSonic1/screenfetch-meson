project('screenfetch-meson', 'c', default_options : ['c_std=c11'],
  license : 'MIT', version: '0.1')

# need this to use strdup and popen
extra_args = ['-D_POSIX_C_SOURCE=200809L']

src = ['src/main.c', 'src/arrays.c', 'src/disp.c', 'src/error_flag.c',
  'src/logos.c', 'src/util.c']
incdir = include_directories('include')
dep = []
c_link = ''
scripts = []

if host_machine.system() == 'linux'
  src += ['src/plat/linux/detect.c']
  dep += [dependency('x11'), dependency('gl')]
  c_link += '-Wl,-lX11,-lGL'
  scripts += ['src/scripts/detectgtk']
else 
  # only Linux has been tested
  error('Unsupported OS')
endif

if get_option('buildtype') == 'release'
  extra_args += ['-march=native']
endif

executable('screenfetch-c', src, include_directories : incdir,
  c_args : extra_args, link_args : c_link, dependencies : dep, install : true)

install_data(scripts, install_dir : get_option('prefix') + '/bin')
