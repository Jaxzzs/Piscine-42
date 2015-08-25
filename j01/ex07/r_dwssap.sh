cat /etc/passwd | grep -v "#" | sed '1!n;d' | rev | cut -d : -f 7 | sort -r | sed -n "$FT_LINE1,$FT_LINE2{p;}" | tr "\n" ", " | sed "s/,/, /g" | rev | sed "s/ ,/./" | rev | tr -d "\n"
