<?php
function test_scope() {
    $x = "scope locale";
    echo $x;  //stamperà scope locale
}
echo $x; //genererà un errore perché $x non è accessibile al di fuori della funzione
?>