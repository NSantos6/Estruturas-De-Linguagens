data carac_comuns = carac_comuns Double Int
# Os personagens têm em comum Altura e Idade


data Personagem = Guerreiro carac_comuns Int| Mago carac_comuns Double | Sacerdote carac_comuns Int
 
 

p1 :: Personagem
p1 = Guerreiro (carac_comuns 1.72 26) 50

p2 :: Personagem
p2 = Mago (carac_comuns 1.6 49) 65.7

p3 :: Personagem
p3 = Sacerdote (carac_comuns 1.7 51) 62



main = print(p1, "-", p2, "-", p3)
