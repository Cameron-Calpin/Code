#!/bin/bash
#: Title		: two_directories
#: Date			: 2021-06-08
#: Author		: "Cameron"
#: Version		: 1.0
#: Description	: creates a directory called bpl inside Bash/. Populates this
#: 				  directory with two subdirectories, bin and scripts.
#: Options		: None

touch $HOME/Code/Bash/bpl/bin/hw.sh
cd $HOME/Code/Bash/bpl/bin/
echo echo Hello,World! > hw.sh
chmod +x hw.sh
./hw.sh