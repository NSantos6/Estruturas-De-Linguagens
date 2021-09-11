#!/usr/bin/perl

use 5.010;

print "Entre com um dia da semana de 0 a 6: \n";

$dia_semana = <STDIN>;
chomp $dia_semana;

given ($dia_semana)
{
    when ('0') { print "Domingo\n" ;}
    when ('1') { print "Segunda\n" ;}
    when ('2') { print "Terça\n" ;}
    when ('3') { print "Quarta\n" ;}
    when ('4') { print "Quinta\n" ;}
    when ('5') { print "Sexta\n" ;}
    when ('6') { print "Sábado\n" ;}
    default { print "Entrada inválida\n";}
}
