#!/bin/sh

#DIST=natty git-buildpackage -S --git-debian-branch=hm/ubuntu --git-upstream-branch=master --git-ignore-new
DIST=natty git-buildpackage --git-ignore-new

dh clean
