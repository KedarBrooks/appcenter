# CMake generated Testfile for 
# Source directory: /home/kedarbrooks/Documents/Projects/AppStore
# Build directory: /home/kedarbrooks/Documents/Projects/AppStore
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(validate-desktop-file "desktop-file-validate" "/home/kedarbrooks/Documents/Projects/AppStore/data/io.elementary.appcenter.desktop")
add_test(validate-daemon-desktop-file "desktop-file-validate" "/home/kedarbrooks/Documents/Projects/AppStore/data/io.elementary.appcenter-daemon.desktop")
add_test(validate-appdata "appstreamcli" "validate" "/home/kedarbrooks/Documents/Projects/AppStore/data/appcenter.appdata.xml")
subdirs(data)
subdirs(po)
subdirs(src)
subdirs(schemas)
