    var correctButton = <?php echo $correctButton; ?>;

    function buttonClick(buttonNumber) {
        if (buttonNumber === correctButton) {
            alert('BOB! (' + buttonNumber + ').');
            resetGame();
        } else {
            alert('bob.');
        }
    }

    function resetGame() {
        correctButton = Math.floor(Math.random() * 70) + 1;
        alert('Bob');
    }
