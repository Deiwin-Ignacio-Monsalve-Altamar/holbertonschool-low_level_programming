#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/Deiwin-Ignacio-Monsalve-Altamar/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/library.so
export LD_PRELOAD=/tmp/library.so
