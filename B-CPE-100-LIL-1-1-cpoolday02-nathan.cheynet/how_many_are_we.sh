#!/bin/bash

a=$(echo $1 | tr [:lower:] [:upper:])
grep -c "$a"
