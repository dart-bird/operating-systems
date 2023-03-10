# operating-systems
Learning about operating systems

Use the following commands for each folder.  
**{modulename**} can be ... bdlist, add_tail, traverse etc.
```shell
$ sudo make
$ sudo insmod {modulename}
$ sudo rmmod {modulename}
$ dmesg
```
ENV settings for vscode  
Check this [stack overflow solution](https://stackoverflow.com/questions/45583473/include-errors-detected-in-vscode)
```json
// ./vscode/c_cpp_properties.json
// ex kernel path : /home/os/linux-5.5.13
// ex arch : arm64
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/home/os/linux-5.5.13/**"
            ],
            "defines": [
                "__KERNEL__"
            ],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c11",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-arm64",
            "configurationProvider": "ms-vscode.cpptools"
        }
    ],
    "version": 4
}
```

VM troubleshooting for UTM 

Clipboard sharing & SPICE for directory sharing
```shell
# use this command in linux vm system
sudo apt install spice-vdagent spice-webdavd
```