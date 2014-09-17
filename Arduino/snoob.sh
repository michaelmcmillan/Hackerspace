while true; do
    echo $(curl -sb -H "Accept: text/html" "http://snoob.me/count") > /dev/tty.usbserial-A603AVPE
done

