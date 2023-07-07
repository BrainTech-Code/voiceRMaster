from cx_Freeze import setup, Executable
import sys

additional_files = ["voice3.h5"]

additional_modules = []

build_exe_options = {
    "excludes": [],
    # "packages": additional_modules,
    "include_files": additional_files,
}
base = "Win32GUI" if sys.platform == "win32" else None
setup(
    name="VoiceR",
    version="1.0",
    description="Une Application de reconnaissance vocal",
    options={"build_exe": build_exe_options},
    executables=[Executable("main.py")],
)
