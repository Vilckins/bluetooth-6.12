savedcmd_/home/denis/bluetooth-6.12/btusb.mod := printf '%s\n'   btusb.o | awk '!x[$$0]++ { print("/home/denis/bluetooth-6.12/"$$0) }' > /home/denis/bluetooth-6.12/btusb.mod
