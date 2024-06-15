#!/bin/bash
TAR_FILE="$1"
if [ ! -f "${TAR_FILE}" ]; then
    echo "file is not accessible, exit"
    exit -1
fi

rm -rf rtthread.rbl

REMOTE_RAW_FILE="~/Downloads/rtthread.bin"
REMOTE_PACK_FILE="~/Downloads/rtthread.rbl"

ssh surface "powershell -Command \"Remove-Item -Path \\\"$REMOTE_RAW_FILE\\\" -Force\"" || true
ssh surface "powershell -Command \"Remove-Item -Path \\\"$REMOTE_PACK_FILE\\\" -Force\"" || true

scp ${TAR_FILE} surface:~/Downloads/rtthread.bin

VERSION="V1.0.0"
if [ "$3" != "" ];then
    VERSION=$3
fi
PARTITION="factory"
if [ "$2" != "" ];then
    PARTITION=$2
fi
PACKAGE_CMD="cd Downloads & PackagerTools --src rtthread.bin --rbl rtthread.rbl --part ${PARTITION} --ver ${VERSION} --prod STM32 --qlz"

ssh surface "${PACKAGE_CMD}"
scp surface:~/Downloads/rtthread.rbl ./