git config --global user.email "alan.lucki@gmail.com"
git config --global user.name "alan.lucki@gmail.com"

d=`date +%y/%m/%d-%H:%M:%S`

echo 'pull...'
git pull

echo 'add .'
git add .

echo 'Ingresar mensaje commit:'

read mensaje_commit
mensaje=$d' - '$mensaje_commit

git commit -m "$mensaje"
echo 'commit ' $mensaje

git push
echo 'push...'