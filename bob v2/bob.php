<?php
// Randomly choose a button with the correct value
$correctButton = mt_rand(1, 70);
?>

<!-- Creating 70 buttons with the text "Bob" -->
<?php
for ($i = 1; $i <= 70; $i++) {
    echo '<button onclick="buttonClick(' . $i . ')">Bob</button>';
}
?>
