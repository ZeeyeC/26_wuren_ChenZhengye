#!/bin/bash

mkdir -p linux_practice/{docs,backup}

touch linux_practice/docs/{readme.txt,notes.log,temp.tmp}

rm linux_practice/docs/temp.tmp

mv linux_practice/docs/notes.log linux_practice/docs/daily_report.txt

echo "Project Status: Active" > linux_practice/docs/daily_report.txt

echo $(date) >> linux_practice/docs/daily_report.txt

cp linux_practice/docs/*.txt linux_practice/backup/

chmod 444 linux_practice/docs/readme.txt

echo "Archive Complete.  readme.txt is now read-only"

chmod 444 linux_practice/docs/daily_report.txt

echo "Archive Complete.  daily_report.txt is now read-only"
