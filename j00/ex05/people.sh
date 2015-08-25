ldapsearch -LLL "(uid=z*)" cn | grep "cn" | sort -d -r | grep "Z" | cut -d ' ' -f 2,3
