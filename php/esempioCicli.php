<?php
// esempi di cicli

$variabile1 = 1;
$variabile2 = 10.4;
//esempio con ciclo for
for($i=0;$i<10;$i++)
    {   //selezione
        if($i == $variabile1){
            //esempio di concatenazione
            echo("<h1>".$i."</h1>");
        }
    }

//esempio ciclo while
$i=0;
while($i<10){
    //selezione
    if($i == $variabile1){
        echo("<h1>".$i."</h1>");
    }
    $i++;
}
?>