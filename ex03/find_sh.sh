#!/bin/sh

find . -type f -name '*.sh' -exec basename '{}' .sh \;
#find . -type f -name '*.sh' -printf '%f\n' | sed s/\.sh$//
