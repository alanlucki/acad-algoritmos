git config --global user.email "alan.lucki@gmail.com"
git config --global user.name "alan.lucki@gmail.com"

d=`date +%y/%m/%d-%H:%M:%S`

echo 'pull...'
git pull

echo 'add .'
git add .

git commit -m "$d - [Express] Cambio Menor"
echo 'commit' $d '- [Express] Cambio Menor'

git push
echo 'push .'