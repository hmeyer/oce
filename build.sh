#!/bin/sh

DIST=natty git-buildpackage -S --git-debian-branch=hm/ubuntu --git-upstream-branch=master --git-ignore-new

rm -rf .pc
rm -rf debian/patches
