project('graphics3d', ['c', 'cpp'], default_options: 'cpp_std=c++20')


src = files([
    'src/main.cpp',
    'src/util.cpp',
    'vendors/glad/src/glad.c'
])

include = include_directories([
    'vendors/glad/include',
    'vendors/glfw/include',
    'vendors/glm'
])

# Find glfw library.
glfw3_lib_dir = meson.current_source_dir() + '/vendors/glfw/lib'
glfw3_lib_dep = meson.get_compiler('cpp').find_library('glfw3', dirs: [glfw3_lib_dir])

# macOS specific dependencies.
cocoa_dep = dependency('cocoa')
iokit_dep = dependency('iokit')

executable(
    'graphics3d',
    sources: src,
    include_directories: include,
    dependencies: [glfw3_lib_dep, cocoa_dep, iokit_dep]
)
