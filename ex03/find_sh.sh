find . -type f -name "*.sh" | rev | cut -d "/" -f 1 | cut -c4- | rev
