import os
from building import *

cwd = GetCurrentDir()
src	= Glob('*.c')
src += Glob(os.path.join("cli_test", "source", "*.c"))
src += Glob(os.path.join("libs", "cli", "source","*.c"))
src += Glob(os.path.join("libs","utils", "source", "*.c"))

CPPPATH = [os.path.join(cwd, "cli_test", "include"),
             os.path.join(cwd, "libs", "cli","include"),
             os.path.join(cwd, "libs", "cli","include","cli"),
             os.path.join(cwd, "libs", "utils","include")]

group = DefineGroup('CorevMCU', src, depend = [''], CPPPATH = CPPPATH)

Return('group')
