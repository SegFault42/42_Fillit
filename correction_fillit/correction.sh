echo "\033[33m--------------------------------TEST NORME----------------------------\n\033[0m"
cd ./../
norminette

echo "\033[33m-------------------------------TEST MAKEFILE--------------------------\n\033[0m"
echo "\033[35mTest make :\033[0m"
make
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make :\033[0m"
make
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make re:\033[0m"
make re
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make clean:\033[0m"
make clean
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make re:\033[0m"
make re
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make clean:\033[0m"
make fclean
read -p "Appuyer sur une touche pour continuer ..."
echo "\033[35mTest make re:\033[0m"
make
read -p "Appuyer sur une touche pour continuer ..."
mv fillit ./correction_fillit/

echo "\033[33m\n----------------------TEST FONCTION INTERDITE------------------------\n\033[0m"
cd ./correction_fillit

nm fillit

echo "\033[33m\n----------------------GESTION D'ERREUR------------------------\n\033[0m"

echo "\033[31mTest programme sans parametres :\033[0m"
./fillit
echo "\033[31m\nTest programme avec trop de parametres\033[0m"
./fillit p p k hud hudh id
echo "\033[32m\nTest programme avec une piece valide\033[0m"
./fillit valide
echo "\033[31m\nTest programme avec une piece invalide\033[0m"
./fillit 01_Piece_invalide
echo "\033[31m\nTest programme avec une piece trop grande\033[0m"
./fillit 01_02_Piece_invalide
echo "\033[31m\nTest programme avec une piece trop petite\033[0m"
./fillit 01_03_Piece_invalide
echo "\033[31m\nTest programme avec un fichier mal formate\033[0m"
./fillit 02_01_Fichier_invalide
echo "\033[31m\nTest programme avec un fichier vide\033[0m"
./fillit 02_2_fichier_vide

echo "\033[33m\n----------------------------L'ALGO---------------------------\n\033[0m"

echo "\033[32m\nTout est la ou il faut, comme il faut\033[0m"
./fillit 03_Tout_est_la_ou_il_faut_comme_il_faut

echo "\033[33m\n----------------------------TIME------------------------------\n\033[0m"

echo "\033[32m\nBonus moin de 1 seconde\033[0m"
time ./fillit test1.prm

echo "\033[32m\nBonus moin de 1 seconde\033[0m"
time ./fillit test7.prm
