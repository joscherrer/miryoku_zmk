#!/usr/bin/env bash

_() {
    local workdir="$1"
    shift
    podman run --rm -it --name zmk-build --userns keep-id --workdir "$workdir" \
        -v "$(pwd):/zmk-config:Z" \
        -v "$(pwd)/../zmk:/zmk:Z" \
        docker.io/zmkfirmware/zmk-build-arm:3.5 bash -c "$*"
}

[ -d ../zmk ] && \
    _ /zmk "[ ! -d .west ] && west init -l app/" && \
    _ /zmk "west update"

_ /zmk/app west build -p -d build/left -b nice_nano_v2 -- -DSHIELD=corne_left -DZMK_CONFIG="/zmk-config/config"
_ /zmk/app west build -p -d build/right -b nice_nano_v2 -- -DSHIELD=corne_right -DZMK_CONFIG="/zmk-config/config"
