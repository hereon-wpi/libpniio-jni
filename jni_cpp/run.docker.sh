 docker run --rm --cap-add sys_ptrace -p 2222:22 -v $(realpath ../src):/tmp/src -d $1