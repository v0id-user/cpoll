project('polling_app', 'c')


# Add compiler flags
if host_machine.system() == 'darwin'
    add_project_arguments('-Wno-deprecated-declarations', language: 'c')
endif

# Add _DEBUG definition when building in debug mode
if get_option('buildtype').startswith('debug')
    add_project_arguments('-D_DEBUG', language: 'c')
endif

include_dirs = include_directories('include')
subdir('src')
subdir('tests')