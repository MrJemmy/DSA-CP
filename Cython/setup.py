from setuptools import setup
from Cython.Build import cythonize

setup(
    name='c_test',
    ext_modules=cythonize("test.pyx"),
)